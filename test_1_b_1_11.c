#include <stdio.h>
void irekae(int *a, int *b) {
    int hako;
    hako = *a;
    *a = *b;
    *b = hako;
}

int main() {
    int data[5];
    int i, j;
    for (i = 0; i < 5; i++) {
        printf("data[%d]：", i);
        scanf_s("%d", &data[i]);
    }
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (data[j] > data[j + 1]) {
                irekae(&data[j], &data[j + 1]);
            }
        }
    }
    for (i = 0; i < 5; i++) {
        printf("data[%d]：%d\n", i, data[i]);
    }
    return 0;
}
