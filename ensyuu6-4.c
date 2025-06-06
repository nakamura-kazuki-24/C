#include <stdio.h>
int main() {
    int x;
    printf("3角形のサイズを入力してください\n");
    scanf_s("%d", &x); 
    function(x);
}

int function(int a){
    int i, j, b;
    for(i=1;i<=a;i++){
        for(j=i;j!=0;j--){
            printf("$ ");
        }
        printf("\n");
    }
}