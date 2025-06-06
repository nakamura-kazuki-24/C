#include <stdio.h>

int main() {
    char sbinary[17] = {0};
    int value;
    int i;

    printf("数値を入力: ");
    scanf_s("%d", &value);
    sbinary[16] = '\0';
    for(i = 15; i >= 0; i--){
        if(value != 0){
            sbinary[i] = (value % 2) + '0';
            value = value / 2;
        } else {
            sbinary[i] = '0';
        }
    }
    printf("%s", sbinary);

    return 0;
}
