#include <stdio.h>

int main(){
    int num, goukei, saisyou;
    int i;
    float heikin;
    goukei = 0;
    printf("値を入力してください。\n");
    printf("1番：");
    scanf_s("%d",&num);
    goukei += num;
    saisyou = num;
    for(i=1;i<5;i++){
        printf("%d番：",i+1);
        scanf_s("%d",&num);
        goukei += num;
        if(saisyou>num){
            saisyou = num;
        }
    }
    heikin = goukei /5;
    printf("合計値：%d\n",goukei);
    printf("最小値：%d\n",saisyou);
    printf("平均値：%.1f\n",heikin);
    return 0;
}