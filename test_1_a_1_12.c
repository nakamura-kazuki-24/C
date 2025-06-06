#include <stdio.h>

int main() {
    int i, j, k;
    for(i=1;i<=9;i++){
        for(j=i;j<=10;j++){
            if(j == 10){
                printf("-----------------\n");
                continue;
            }
            k = i * j;
            printf("%d X %d = %2d\n",i,j,k);
        }
    }
    return 0;
}