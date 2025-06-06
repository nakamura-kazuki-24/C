#include <stdio.h>

int main() {
    int i, j;
    float zikan, kyori, sokudo;
    printf("計算する回数を選択してください：");
    scanf_s("%d",&i);
    for(j=0;j<i;j++){
        printf("距離(km)を入力してください：");
        scanf_s("%f",&kyori);
        printf("平均速度(km/h)を入力してください：");
        scanf_s("%f",&sokudo);
        zikan = kyori / sokudo;
        printf("所要時間は%.1f時間です\n",zikan);
    }
    return 0;
}