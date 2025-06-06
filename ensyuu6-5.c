#include <stdio.h>
int main() {
    int x;
    printf("九九の団を１つ入力してください\n");
    scanf_s("%d", &x); 
    function(x);
}

int function(int a){
    int i, j;
    for(i=1;i<=9;i++){
        j = a * i;
        printf("%d x %d = %d\n",a,i,j);
        }
}