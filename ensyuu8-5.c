#include <stdio.h>

int main() {
    int binary[16] = {0};
    int value;
    int i;
    int j, k;
    k = 0;
    printf("数値を入力");
    scanf_s("%d",&value);
    for(i=0;i<16;i++){
        if(value != 0){
            binary[i] = value % 2;
            value = value / 2;
        }
    }
    for(i = 15; i >= 0; i--) {
        printf("%d", binary[i]);
    }
}