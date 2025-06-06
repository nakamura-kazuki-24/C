#include <stdio.h>

int main(void) {
    int i;
    float feat, metal, onsu, pondo;
    do {
        printf("変換\n\n");
        printf("1. フィートからメートルへ\n");
        printf("2. メートルからフィートへ\n");
        printf("3. オンスからポンドへ\n");
        printf("4. ポンドからオンスへ\n");
        printf("5. 終了\n");
        do {
            printf("番号を選んで入力してください: ");
            scanf_s("%d", &i);
        } while (i < 1 || i > 5);
        switch (i) {
            case 1:
                printf("フィート数を入力してください: ");
                scanf_s("%f", &feat);
                printf("メートル: %.2f\n", feat / 3.28);
                break;
            case 2:
                printf("メートル数を入力してください: ");
                scanf_s("%f", &metal);
                printf("フィート: %.2f\n", metal * 3.28);
                break;
            case 3:
                printf("オンス数を入力してください: ");
                scanf_s("%f", &onsu);
                printf("ポンド数: %.2f\n", onsu / 16);
                break;
            case 4:
                printf("ポンド数を入力してください: ");
                scanf_s("%f", &pondo);
                printf("オンス: %.2f\n", pondo * 16);
                break;
            case 5:
                printf("5が入力されたので終了します");
                break;
        }
    } while (i != 5);

    return 0;
}
