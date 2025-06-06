#include <stdio.h>

 int main(void){
    int x;
    printf("点数を入力してください\n");
    scanf_s("%d",&x);
    if(x>=60){
        printf("合格");
    }
    else{
        printf("不合格");
    }
    return 0;
 }