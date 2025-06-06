#include <stdio.h>

int main() {
    int tabu, atto, kaigyou;
    char i;
    tabu = 0;
    atto = 0;
    kaigyou = 0;
    while(1){
        scanf_s("%c",&i);
        switch(i){
            // タブがわかりませんでした
            case '\n':
                kaigyou++;
                break;
            case '@':
                atto++;
                break;
            case 'q':
                break;
            default:
            break;
        }
        if(i == 'q'){
            break;
        }
    }
    printf("タブ:%4d回\n",tabu);
    printf("改行:%4d回\n",kaigyou);
    printf("＠　:%4d回\n",atto);
    return 0;
}