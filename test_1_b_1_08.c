#include <stdio.h>

int main(){
    char cs[3][10000];
    int i;
    for(i=0;i<3;i++){
        printf("cs[%d]：",i);
        scanf_s("%s",&cs[i]);
    }
    for(i=0;i<3;i++){
        printf("cs[%d]：\"%s\"\n",i,cs[i]);
    }
    return 0;
}