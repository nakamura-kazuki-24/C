#include <stdio.h>

int main() {
    int i, j, nagasa, haba, menseki,soumenseki;
    printf("部屋の数を入力してください：");
    scanf_s("%d",&i);
    menseki = 0;
    soumenseki = 0;
    for(j=0;j<i;j++){
        printf("長さを入力してください：");
        scanf_s("%d",&nagasa);
        printf("幅を入力してください：");
        scanf_s("%d",&haba);
        menseki = nagasa * haba;
        soumenseki += menseki;
    }
    printf("総床面積：%d",soumenseki);
    return 0;
}