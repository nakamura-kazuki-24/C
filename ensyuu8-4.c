#include <stdio.h>

int main() {
    int str[10];
    int i, j, k;
    j = 0;
    for(i=0;i<10;i++){
        printf("%dつめの数値を入力",i+1);
        scanf_s("%d",&str[i]);
        j = j + str[i];
        if(j > 99){
            printf("\n合計が100を超えたので入力した数値を出力します\n");
            for(k=0;k<=i;k++){
                printf("%d ",str[k]);
            }
            break;
        }
    }
    if(i == 10){
        printf("\n10回繰り返したので入力した数値を出力します\n");
        for(i=0;i<10;i++){
            printf("%d ",str[i]);
        }
    }
}