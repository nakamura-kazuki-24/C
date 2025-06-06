#include <stdio.h>
int fact(int a){
    int j, k;
    k=1;
    for(j=a;j>0;j--){
        k = k * j;
    }
    return k;
}
int main(){
    int suu, kaijo;
    kaijo = 0;
    printf("数値を入力してください：");
    scanf_s("%d",&suu);
    kaijo = fact(suu);
    printf("入力された数の階乗は%dです。",kaijo); //入力が13以上になるとオーバーフローして正しい値が返されない
}