#include <stdio.h>

int main() {
    int str[10];
    int i;
    for(i=0;i<10;i++){
        printf("%dつめの数値を入力",i+1);
        scanf_s("%d",&str[i]);
    }
    for(i=0;i<10;i++){
        printf("%d ",str[9-i]);
    }
}