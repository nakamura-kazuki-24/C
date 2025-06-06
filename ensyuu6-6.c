#include <stdio.h>

int function(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
}

int main() {
    char str[10000];
    printf("文字列を入力してください: ");
    scanf_s("%s", str);
    function(str);
    printf("変換後の文字列: %s\n", str);
    return 0;
}
