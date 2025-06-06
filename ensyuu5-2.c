#include <stdio.h>

 int main(void){
    int x;
    printf("点数を入力してください\n");
    scanf_s("%d",&x);
    if(x>=80){
        printf("大変よくできました。");
    }
    else if(x>=60){
        printf("よくできました。");
    }
    else{
        printf("ざんねんでした。");
    }
    return 0;
 }