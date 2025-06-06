#include <stdio.h>

int main() {
    int x, y, z, anser;
    printf("1つ目の整数を入力してください\n");
    scanf_s("%d", &x); 
    printf("2つ目の整数を入力してください\n");
    scanf_s("%d", &y); 
    printf("3つ目の整数を入力してください\n");
    scanf_s("%d", &z); 
    anser = funcsion(x,y,z);
    printf("最も大きい整数は %d です\n", anser);
    return 0;
}

int funcsion(int a,int b,int c) {
    if(a>b){
        if(a>c){
            return a;
        }
        else{
            return c;
        }
    }
    else if(b>c){
        return b;
    }
    else{
        return c;
    }
}