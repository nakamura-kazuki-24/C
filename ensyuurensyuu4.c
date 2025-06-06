#include <stdio.h>

int main() {
    char tango[10000];
    int i, j, retu;
    printf("文字列を入力 : ");
    scanf_s("%s",&tango);
    for(i=0;tango[i]!='\0';i++){

    }
    for(j=i-1;j>=0;j--){
        printf("%c",tango[j]);
    }
}