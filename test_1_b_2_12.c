#include <stdio.h>

int main(void) {
    int ninzuu, i=0, tokuten, yuu=0, ryou=0, ka=0, huka=0;
    while(1){
        printf("評価する人数を入力してください(最大１００人)：");
        scanf_s("%d",&ninzuu);
        if(ninzuu>100 || ninzuu<0){
            printf("人数の入力が正しくありません\n");
        }
        else{
            break;
        }
    }
    while(i != ninzuu){
        printf("%d人目 得点：",i+1);
            scanf_s("%d",&tokuten);
            if(tokuten>100 || tokuten<0){
                printf("得点の入力が正しくありません\n");
            }
            else if(tokuten>=90){
                yuu++;
                i++;
            }
            else if(tokuten>=70){
                ryou++;
                i++;
            }
            else if(tokuten>=50){
                ka++;
                i++;
            }
            else{
                huka++;
                i++;
            }
    }
        
    printf("優　%3d\n良　%3d\n可　%3d\n不可%3d",yuu,ryou,ka,huka);   
}
