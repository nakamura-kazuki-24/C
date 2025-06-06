#include <stdio.h>

int main() {
    int x, y, z;
    printf("1つ目の整数を入力してください\n");
    scanf_s("%d", &x); 
    printf("2つ目の整数を入力してください\n");
    scanf_s("%d", &z); 
    y = funcsion(x,z);
    printf("大きい整数は %d です\n", y);
    return 0;
}

int funcsion(int a,int b) {
    int c;
    if(a>b){
        c = a;
    }
    else{
        c = b;
    }
    return c;
}