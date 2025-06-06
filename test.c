#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct {
    char *rank;
    char *suit;
    int value;
} Card;

const char *ranks[] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
const char *suits[] = {"♠", "♥", "♦", "♣"};
int values[] = {11,2,3,4,5,6,7,8,9,10,10,10,10};

Card draw_card() {
    int r = rand() % 13;
    int s = rand() % 4;
    Card card;
    card.rank = (char *)ranks[r];
    card.suit = (char *)suits[s];
    card.value = values[r];
    return card;
}

// 横並び表示（5行構成）
void show_hand(Card hand[], int count, const char *owner) {
    printf("%sの手札:\n", owner);
    for (int line = 0; line < 5; line++) {
        for (int i = 0; i < count; i++) {
            Card c = hand[i];
            if (line == 0) printf("┌───────┐ ");
            if (line == 1) printf("│%-2s     │ ", c.rank);
            if (line == 2) printf("│   %s   │ ", c.suit);
            if (line == 3) printf("│     %-2s│ ", c.rank);
            if (line == 4) printf("└───────┘ ");
        }
        printf("\n");
    }
}

int total(Card hand[], int count) {
    int sum = 0, aces = 0;
    for (int i = 0; i < count; i++) {
        sum += hand[i].value;
        if (hand[i].value == 11) aces++;
    }
    while (sum > 21 && aces--) sum -= 10;
    return sum;
}

int main() {
    srand(time(NULL));
    Card player[10], dealer[10];
    int pCount = 0, dCount = 0;
    char choice;

    player[pCount++] = draw_card();
    player[pCount++] = draw_card();
    dealer[dCount++] = draw_card();
    dealer[dCount++] = draw_card();

    // プレイヤーターン
    while (1) {
        show_hand(player, pCount, "あなた");
        printf("合計: %d\n", total(player, pCount));
        if (total(player, pCount) > 21) {
            printf("バースト！あなたの負けです。\n");
            return 0;
        }
        printf("ヒット(h) or スタンド(s)? ");
        scanf_s(" %c", &choice);
        if (choice == 'h') {
            player[pCount++] = draw_card();
        } else {
            break;
        }
    }

    // ディーラーターン
    printf("\nディーラーのターン...\n");
    while (total(dealer, dCount) < 17) {
        dealer[dCount++] = draw_card();
    }
    show_hand(dealer, dCount, "ディーラー");
    printf("合計: %d\n", total(dealer, dCount));

    // 勝敗判定
    int pTotal = total(player, pCount);
    int dTotal = total(dealer, dCount);

    if (dTotal > 21 || pTotal > dTotal) {
        printf("あなたの勝ちです！\n");
    } else if (pTotal < dTotal) {
        printf("あなたの負けです。\n");
    } else {
        printf("引き分けです。\n");
    }

    return 0;
}
