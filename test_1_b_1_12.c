#include <stdio.h>
int main() {
    char i, hako;
    char moji[] = "MEITEC   ";
    int j;
    while(1){
        printf("\r%s",moji);          //上書きして表示する方法がわからなかった
        i = moji[0];
        for(j=0;j<8;j++){
            moji[j] = moji[j+1];
        }
        moji[j] = i;
        for(j=0;j<100000000;j++){

        }
    }
    return 0;
}