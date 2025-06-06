#include <stdio.h>

int main() {
    int binary[16] = {0};
    int value;
    int i;
    printf("数値を入力: ");
    scanf_s("%d", &value);
    for(i = 0; i < 16 && value > 0; i++) {
        binary[i] = value % 2;
        value = value / 2;
    }
    printf("2進数表現: ");
    for(i = 15; i >= 0; i--) {
        printf("%d", binary[i]);
    }

    printf("\n");
    return 0;
}
