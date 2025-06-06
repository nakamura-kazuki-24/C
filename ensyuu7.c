#include <stdio.h>

int main() {
    int x;

    printf("月を入力してください（1～12）\n");
    scanf_s("%d", &x);

    switch (x) {
        case 1:
            printf("1月: 元日、成人の日\n");
        case 2:
            printf("2月: 建国記念の日\n");
        case 3:
            printf("3月: 春分の日\n");
        case 4:
            printf("4月: 昭和の日\n");
        case 5:
            printf("5月: 憲法記念日、みどりの日、こどもの日\n");
        case 6:

        case 7:
            printf("7月: 海の日\n");
        case 8:

        case 9:
            printf("9月: 敬老の日、秋分の日\n");
        case 10:
            printf("10月: 体育の日\n");
        case 11:
            printf("11月: 文化の日、勤労感謝の日\n");
        case 12:
            printf("12月: 天皇誕生日\n");
            break;
        default:
            if (x < 1 || x > 12) {
                printf("無効な月です。1～12の数値を入力してください。\n");
            }
        }
    return 0;
}
