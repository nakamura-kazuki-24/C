#include <stdio.h>

 int main(){
    int a, b, c, d, e, f;
    a = 10;
    b = 20;
    printf("変数aは%d変数bは%d",a,b);
    c = 076;
    d = 041;
    printf("\n変数cは8進数の%d変数dは8進数の%d",c,d);
    e = 0x45;
    f = 0xda;
    printf("\n変数eは16進数の%d変数fは16進数の%d",e,f);
}