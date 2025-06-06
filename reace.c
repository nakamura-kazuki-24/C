#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#ifdef _WIN32
#include <conio.h>
#include <windows.h>
#else
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
#endif

#define HEIGHT 5
#define WIDTH 30

char track[HEIGHT][WIDTH+1];
int playerPos = HEIGHT / 2;
int gameOver = 0;
int score = 0;

#ifdef _WIN32
void sleep_ms(int ms) {
    Sleep(ms);
}
#else
void sleep_ms(int ms) {
    usleep(ms * 1000);
}
#endif

// キー入力があるかチェック（ノンブロッキング）
int kbhit() {
#ifdef _WIN32
    return _kbhit();
#else
    struct termios oldt, newt;
    int ch;
    int oldf;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_SETFL, oldf);
    if(ch != EOF) {
        ungetc(ch, stdin);
        return 1;
    }
    return 0;
#endif
}

// キーを1つ読み込む（ノンブロッキング）
int getch_noblock() {
#ifdef _WIN32
    return _getch();
#else
    struct termios oldt, newt;
    int ch;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return ch;
#endif
}

void initTrack() {
    for(int i = 0; i < HEIGHT; i++) {
        for(int j = 0; j < WIDTH; j++) {
            track[i][j] = '-';
        }
        track[i][WIDTH] = '\0';
    }
}

void draw() {
    system(
#ifdef _WIN32
        "cls"
#else
        "clear"
#endif
    );
    printf("SCORE: %d\n", score);
    for(int i = 0; i < HEIGHT; i++) {
        for(int j = 0; j < WIDTH; j++) {
            if(i == playerPos && j == 2) {
                printf("^"); // プレイヤー表示は常に左から3番目
            } else {
                printf("%c", track[i][j]);
            }
        }
        printf("\n");
    }
}

void updateTrack() {
    // 左へ一マスずらす
    for(int i = 0; i < HEIGHT; i++) {
        for(int j = 0; j < WIDTH - 1; j++) {
            track[i][j] = track[i][j+1];
        }
    }
    // 右端に新しい障害物か空白をランダム配置
    for(int i = 0; i < HEIGHT; i++) {
        if(rand() % 20 == 0) {
            track[i][WIDTH-1] = 'X'; // 障害物
        } else {
            track[i][WIDTH-1] = '-';
        }
    }
}

int main() {
    srand(time(NULL));
    initTrack();

    while (!gameOver) {
        draw();

        // 入力処理
        if(kbhit()) {
            char ch = getch_noblock();
            if(ch == 'w' || ch == 'W') {
                if(playerPos > 0) playerPos--;
            } else if(ch == 's' || ch == 'S') {
                if(playerPos < HEIGHT - 1) playerPos++;
            } else if(ch == 'q' || ch == 'Q') {
                printf("終了します\n");
                break;
            }
        }

        // トラックを更新（障害物を左へ）
        updateTrack();

        // 衝突判定 プレイヤー位置の3列目に障害物があるか
        if(track[playerPos][2] == 'X') {
            gameOver = 1;
            draw();
            printf("ゲームオーバー！あなたのスコアは %d です\n", score);
            break;
        }

        score++;
        sleep_ms(150); // スピード調整
    }

    return 0;
}
