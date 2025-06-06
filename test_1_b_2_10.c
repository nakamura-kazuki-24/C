#include<stdio.h>
int main(void) {
    int data[3][5] = { 
                        {1, 2, 3, 4, 5}, 
                        {6, 7, 8, 9, 10}, 
                        {99, 98, 97, 96, 95}}; 
    int *ptr = &data[0][0];
    int sum = 0;
    int i, j;
    for(i=0;i<15;i++){
        sum = sum + *(ptr + i);
    }
    printf("2次元配列合計：%d",sum);
    return 0; 
}