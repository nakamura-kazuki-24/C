#include <stdio.h>

 int main(void){
    int x, y, z;
    printf("0 = 日曜 1 = 月曜  2 = 火曜 3 = 水曜 4 = 木曜 5=  金曜 6 = 土曜\n\n対応する曜日の数字を入れてください\n");
    scanf_s("%d",&x);
    printf("0 = 午前、1 = 午後、2 = 夜間\n\n対応する時間帯の数字を入力してください\n");
    scanf_s("%d",&y);
    if(x==0){
        printf("休診です。");
    }
    else if(x==2){
        if(y==0){
            printf("休診です。"); 
        }
    }
    else if(x==3){
        if(y==2)
        printf("休診です。");
    }
    else if(x==5){
        if(y==0){
            printf("休診です。");
        }
    }
    else if(x==6){
        if(y!=0){
            printf("休診です。");
        }
    }
    else{
        printf("病院が開いています。");
    }
    return 0;
 }