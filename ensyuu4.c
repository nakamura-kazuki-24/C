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
    else if(x<y){
        printf("xはyより小さい");
    }
    else{
        printf("xとyの値は等しい");
    }
    return 0;
 }