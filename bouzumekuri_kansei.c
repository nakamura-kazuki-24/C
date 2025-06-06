#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_PLAYER 100
void kadowomekuru() {
    char buffer[10];
    fgets(buffer, sizeof(buffer), stdin);
}
int main() {
    int huda[100] = {
        0, 1, 0, 0, 0, 0, 0, 2, 1, 0,
        0, 2, 0, 0, 0, 0, 0, 0, 1, 0,
        2, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
        0, 0, 0, 0, 0, 0, 2, 0, 0, 0,
        0, 0, 1, 1, 0, 1, 1, 1, 1, 1,
        1, 1, 0, 0, 1, 2, 1, 0, 2, 2,
        0, 1, 0, 0, 0, 0, 0, 0, 0, 1,
        0, 2, 0, 0, 2, 2, 2, 1, 1, 1,
        0, 1, 0, 0, 2, 0, 0, 0, 0, 0
    };
    int nizuu;
    int boti = 0;
    int i = 0, j;
    printf("遊ぶ人数を入力してください：");
    scanf_s("%d", &nizuu);
    getchar();
    if (nizuu <= 0 || nizuu > MAX_PLAYER) {
        printf("人数は1〜%d人で入力してください。\n", MAX_PLAYER);
        return 1;
    }
    int sucore[MAX_PLAYER] = {0};
    printf("百人一首坊主捲りゲームスタート！\n");
    srand((unsigned int)time(NULL));
    for (int x = 99; x > 0; x--) {
        int y = rand() % (x + 1);
        int temp = huda[x];
        huda[x] = huda[y];
        huda[y] = temp;
    }
    while (i < 100) {
        for (j = 0; j < nizuu && i < 100; j++, i++) {
            printf("%d人目の人はエンターを押してカードをめくってください\n", j + 1);
            kadowomekuru();
            int card = huda[i];
            if (card == 0) {
                printf("男をめくりました。スコアが上がります\n");
                sucore[j] += 1;
            } else if (card == 1) {
                printf("女をめくりました。スコアが上がります\n");
                sucore[j] += 1 + boti;
                boti = 0;
            } else if (card == 2) {
                printf("坊主をめくりました。スコアが０になります\n");
                boti += sucore[j] + 1;
                sucore[j] = 0;
            }
            printf("あなたのスコアは %d 点です\n\n", sucore[j]);
        }
    }
    printf("ゲーム終了！最終スコア：\n");
    for (i = 0; i < nizuu; i++) {
        printf("%d人目のスコアは %d 点です\n", i + 1, sucore[i]);
    }
    return 0;
}