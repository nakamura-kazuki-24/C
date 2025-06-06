#include <stdio.h>

 int main(void){
    int x, y;
    printf("xの値を入力してください\n");
    scanf_s("%d",&x);
    printf("yの値を入力してください\n");
    scanf_s("%d",&y);
    if(x>y){
        printf("xはyより大きい");
    }
    return 0;
 }