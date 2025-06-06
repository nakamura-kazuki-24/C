#include <stdio.h>
int main(){
    char namae[1000];
    char tel[1000];
    char hantei, d;
    int tuki, hi, nenn;
    while(1){
        printf("名前を入力してください：");
        scanf_s("%s",namae);
        printf("あなたの名前は%sですか？y/n：\n",namae);
        scanf_s("%c",&d);
        scanf_s("%c",&hantei);
        if(hantei == 'y'){
            break;
        }
        else{
            printf("もう一度名前を入力してください\n");
        }
    }
    while(1){
        printf("生年月日(mm/dd/yy)を入力してください：");
        scanf_s("%d%d%d",&tuki,&hi,&nenn);
        printf("あなたの生年月日(mm/dd/yy)は%d/%d/%dですか？y/n：\n",tuki,hi,nenn);
        scanf_s("%c",&d);
        scanf_s("%c",&hantei);
        if(hantei == 'y'){
            break;
        }
        else{
            printf("もう一度生年月日(mm/dd/yy)を入力してください\n");
        }
    }
    while(1){
        printf("電話番号を入力してください：");
        scanf_s("%s",tel);
        printf("あなたの電話番号は%sですか？y/n：\n",tel);
        scanf_s("%c",&d);
        scanf_s("%c",&hantei);
        if(hantei == 'y'){
            break;
        }
        else{
            printf("もう１度電話番号を入力してください\n");
        }
    }
    printf("入力された情報は\n");
    printf("名前；%s",namae);
    printf("名前：%d/%d/%d",tuki,hi,nenn);
    printf("電話番号：%s",tel);
    return 0;
}