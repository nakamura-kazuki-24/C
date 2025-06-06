#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

#define WIDTH 10
#define HEIGHT 20

int field[HEIGHT][WIDTH] = {0}; // プレイフィールド

// テトリミノの定義（4x4）
int tetromino[7][4][4][4] = {
    // I
    {
        {{0,0,0,0},
         {1,1,1,1},
         {0,0,0,0},
         {0,0,0,0}},

        {{0,0,1,0},
         {0,0,1,0},
         {0,0,1,0},
         {0,0,1,0}},

        {{0,0,0,0},
         {1,1,1,1},
         {0,0,0,0},
         {0,0,0,0}},

        {{0,1,0,0},
         {0,1,0,0},
         {0,1,0,0},
         {0,1,0,0}},
    },

    // O
    {
        {{0,0,0,0},
         {0,1,1,0},
         {0,1,1,0},
         {0,0,0,0}},

        {{0,0,0,0},
         {0,1,1,0},
         {0,1,1,0},
         {0,0,0,0}},

        {{0,0,0,0},
         {0,1,1,0},
         {0,1,1,0},
         {0,0,0,0}},

        {{0,0,0,0},
         {0,1,1,0},
         {0,1,1,0},
         {0,0,0,0}},
    }
};

int currentX = 3, currentY = 0, tetro = 0, rotation = 0;

void draw() {
    COORD cursorPosition;
    cursorPosition.X = 0;
    cursorPosition.Y = 0;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cursorPosition);

    for(int y = 0; y < HEIGHT; y++) {
        for(int x = 0; x < WIDTH; x++) {
            if (field[y][x])
                printf("■");
            else
                printf("・");
        }
        printf("\n");
    }
}


int checkCollision(int x, int y, int r) {
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (tetromino[tetro][r][i][j]) {
                int nx = x + j;
                int ny = y + i;
                if (nx < 0 || nx >= WIDTH || ny >= HEIGHT)
                    return 1;
                if (field[ny][nx])
                    return 1;
            }
    return 0;
}

void merge() {
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (tetromino[tetro][rotation][i][j])
                field[currentY + i][currentX + j] = 1;
}

void clearLines() {
    for (int y = 0; y < HEIGHT; y++) {
        int full = 1;
        for (int x = 0; x < WIDTH; x++) {
            if (!field[y][x]) {
                full = 0;
                break;
            }
        }
        if (full) {
            for (int ny = y; ny > 0; ny--)
                for (int x = 0; x < WIDTH; x++)
                    field[ny][x] = field[ny-1][x];
        }
    }
}

int main() {
    srand(time(0));
    while (1) {
        if (_kbhit()) {
            char key = _getch();
            if (key == 'a' && !checkCollision(currentX - 1, currentY, rotation))
                currentX--;
            if (key == 'd' && !checkCollision(currentX + 1, currentY, rotation))
                currentX++;
            if (key == 's' && !checkCollision(currentX, currentY + 1, rotation))
                currentY++;
            if (key == 'w' && !checkCollision(currentX, currentY, (rotation + 1) % 4))
                rotation = (rotation + 1) % 4;
        }

        Sleep(200);
        if (!checkCollision(currentX, currentY + 1, rotation)) {
            currentY++;
        } else {
            merge();
            clearLines();
            currentX = 3;
            currentY = 0;
            tetro = rand() % 2; // 0 or 1
            rotation = 0;
            if (checkCollision(currentX, currentY, rotation)) {
                draw();
                printf("Game Over\n");
                break;
            }
        }

        draw();
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++)
                if (tetromino[tetro][rotation][i][j])
                    field[currentY + i][currentX + j] = 1;

        // テトロミノを仮表示（ここで描画後リセット）
        draw();
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++)
                if (tetromino[tetro][rotation][i][j])
                    field[currentY + i][currentX + j] = 0;
    }
    return 0;
}
