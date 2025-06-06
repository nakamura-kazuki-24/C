#include <stdio.h>

 int main(void){
    int x;
    printf("点数を入力してください\n");
    scanf_s("%d",&x);
    if(x>=80){
        printf("優");
    }
    else if(x>=70){
        printf("良");
    }
    else if(x>=60){
        printf("可");
    }
    else{
        printf("不可");
    return 0;
 }
 }