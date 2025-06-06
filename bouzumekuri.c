#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int kadowomekuru() {
    char enta;
    while (1) {
        scanf_s("%c", &enta);
        if (enta == '\n') {
            return 1;
        } else {
            printf("入力されたのがエンターではありません\n");
        }
    }
}
int main(){
    int huda[100] = {
    0, 1, 0, 0, 0, 0, 0, 2, 1, 0,
    0, 2, 0, 0, 0, 0, 0, 0, 1, 0,
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 2, 0, 0, 0,
    0, 0, 1, 1, 0, 1, 1, 1, 1, 1,
    1, 1, 0, 0, 1, 2, 1, 0, 2, 2,
    0, 1, 0, 0, 0, 0, 0, 0, 0, 1,
    0, 2, 0, 0, 2, 2, 2, 1, 1, 1,
    0, 1, 0, 0, 2, 0, 0, 0, 0, 0};
    int temp, bouzu, otoko, onnna, nizuu, boti = 0, i, j, k, mekuru;
    char enta;
    printf("遊ぶ人数を入力してください：");
    scanf_s("%d",&nizuu);
    int sucore[nizuu];
    for(i=0;i<nizuu;i++){
        sucore[i]=0;
    }
    printf("百人一首坊主捲りゲームスタート！\n");
    srand((unsigned int)time(NULL));
    for (i = 99; i > 0; i--) {
        int j = rand() % (i + 1);
        temp = huda[i];
        huda[i] = huda[j];
        huda[j] = temp;
    }
    do{
        for(j=0;j<nizuu;j++){
            if(i==100){
                break;
            }
            printf("%d人目の人はエンターを押してカードをめくってください\n",j+1);
            kadowomekuru();
            switch(huda[i]){
                case 0:
                printf("男をめくりました。スコアが上がります\n\n");
                sucore[j] = sucore[j] + 1;
                printf("あなたのスコアは%2d\n\n",sucore[j]);
                break;
                case 1:
                printf("女をめくりました。スコアが上がります\n\n");
                sucore[j] = sucore[j] + 1;
                sucore[j] = sucore[j] + boti;
                boti = 0;
                printf("あなたのスコアは%2d\n\n",sucore[j]);
                break;
                case 2:
                printf("  _____\n");
                printf(" /     \\\n");
                printf("|  o o  |\n");
                printf("|   ^   |\n");
                printf("|  ---  |\n");
                printf(" \\_____/\n");
                printf("坊主をめくりましたスコアが０になります\n\n");
                boti++;
                boti = boti + sucore[j];
                sucore[j] = 0;
                printf("あなたのスコアは%2d\n\n",sucore[j]);
                break;
            }i++;  
        }
    }while(i != 100);
    for(i=0;i<nizuu;i++){
        printf("%d人目ののスコアは%dです\n",i+1,sucore[i]);
    }
}