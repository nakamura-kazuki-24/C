#include <stdio.h>

int main() {
    int x, y;
    printf("整数を入力してください\n");
    scanf_s("%d", &x); 

    y = funcsion(x);
    printf("入力した整数の2乗は %d です\n", y);

    return 0;
}

int funcsion(int a) {
    a = a * a;
    return a;
}