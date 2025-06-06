#include <stdio.h>
 
int main(){
 
    int kazu , naga , haba ,total , num;
    num = 0;
 
    printf("部屋の数を入力してください：");
    scanf_s("%d",&kazu);
 
    for(int i = 0 ; i < kazu ; i++){
 
        printf("長さを入力してください：");
        scanf_s("%d",&naga);
 
        printf("幅を入力してください；");
        scanf_s("%d",&haba);
 
        total = haba * naga;
 
       
 
 
    }
 
    printf("%d",num);
 
 
    return 0;
}