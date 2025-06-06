#include <stdio.h>

// 2つの整数の値を交換する関数
void swap(int *i, int *j) 
{ 
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}

int main(void) 
{ 
    int num1, num2;

    // ユーザーに整数を入力してもらう
    printf("第１の整数を入力してください: ");
    scanf_s("%d", &num1);
    
    printf("第２の整数を入力してください: ");
    scanf_s("%d", &num2);

    // 交換前の値を表示
    printf("交換前: num1 = %d, num2 = %d\n", num1, num2);

    // swap 関数を呼び出して値を交換
    swap(&num1, &num2);

    // 交換後の値を表示
    printf("交換後: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
