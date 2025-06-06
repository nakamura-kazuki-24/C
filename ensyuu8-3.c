#include <stdio.h>

int main() {
    int str[10], guusuu[10], kisuu[10];
    int i, countguu, countkisuu;
    countguu = 0;
    countkisuu = 0;
    for(i=0;i<10;i++){
        printf("%dつめの数値を入力",i+1);
        scanf_s("%d",&str[i]);
    }
    for(i=0;i<10;i++){
        if(str[i]%2==0){
            guusuu[countguu] = str[i];
            countguu++;
        }
        else{
            kisuu[countkisuu] = str[i];
            countkisuu++;
        }
    }
    printf("偶数：");
    for(i=0;i<countguu;i++){
        printf("%d ",guusuu[i]);
    }
    printf("\n");
    printf("奇数：");
    for(i=0;i<countkisuu;i++){
        printf("%d ",kisuu[i]);
    }
}