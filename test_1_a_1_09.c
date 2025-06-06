#include <stdio.h>

int main() {
    float i;
    scanf_s("%f",&i);
    printf("weight = %.1f",i);
    i = i * 0.17;
    printf("The weight on the surface of the \"moon\" = %.2f",i);
    return 0;
}