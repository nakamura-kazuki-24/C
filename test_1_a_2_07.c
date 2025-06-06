#include <stdio.h>

int main() {
    int i, j, count;
    while(1){
        printf("正の数を入力してください：");
        scanf_s("%d",&i);
        count = 0;
        if(i!=0){
            for(j=1;j<=i;j++){
                if(i % j ==0){
                    count++;
                }
            }
            if(count == 2){
                printf("その数は素数です\n");
            }
            else{
                printf("その数は素数ではありません\n");
            }
        }
        else{
            break;
        }
    }
    return 0;
}