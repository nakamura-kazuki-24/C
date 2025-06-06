#include <stdio.h>
int main() {
    char mojiretu[10000];
    char kensaku;
    int i = 0;
    int count = 0;
    printf("文字列を入力してください: ");
    scanf_s("%s",mojiretu);
    printf("検索したい文字を入力してください: ");
    scanf_s(" %c", &kensaku);
    while (mojiretu[i] != '\0') {
        if (mojiretu[i] == kensaku) {
            count++;
            printf("%cの%d 回目は、 %d 文字目です\n", kensaku, count, i + 1);
        }
        i++;
    }
    if (count == 0) {
        printf("Not Found\n");
    }
    return 0;
}//ポインタを使用していない
