#include <stdio.h>

int main() {
    char eigo[] = {'a','b','c','d','e','f','g',
                     'h','i','j','k','l','m','n',
                     'o','p','q','r','s','t','u',
                     'v','w','x','y','z'};
    int i, j, retu;
    printf("列数を入力 : ");
    scanf_s("%d",&retu);
    for(i=0;i<26;i++){
        printf("%c",eigo[i]);
        if((i + 1) % retu == 0){
            printf("\n");
        }
    }
}