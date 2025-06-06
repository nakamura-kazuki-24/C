#include <stdio.h>

 int main(void){
    int x, y;
    printf("1つめの値を入力してください\n");
    scanf_s("%d",&x);
    printf("2つめの値を入力してください\n");
    scanf_s("%d",&y);
    if(x>y){
        printf("%d",x);
    }
    else{
        printf("%d",y);
    }
    return 0;
 }