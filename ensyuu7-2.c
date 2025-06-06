#include <stdio.h>

int main() {
    char str[] = "hello world";
    *(str) = 'H';
    *(str + 6) = 'W';
    printf("%s\n", str);
    return 0;
}
