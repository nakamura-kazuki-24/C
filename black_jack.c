#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DECK_SIZE 52

// カードの構造体
typedef struct {
    int value;  // 1〜13 (A〜K)
    char *suit; // スート
} Card;

void shuffleDeck(Card *deck);
int cardValue(Card c);
int handValue(Card *hand, int count);
void printCard(Card c);
void printHand(Card *hand, int count, int hideFirst);

int main() {
    while(1){
    Card deck[DECK_SIZE];
    Card playerHand[12], dealerHand[12]; // 最大12枚まで想定
    int playerCount = 0, dealerCount = 0;
    int deckIndex = 0;
    char choice;

    // デッキ初期化
    char *suits[] = {"♠", "♥", "♦", "♣"};
    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 13; j++) {
            deck[i * 13 + j].value = j + 1;
            deck[i * 13 + j].suit = suits[i];
        }
    }

    srand(time(NULL));
    shuffleDeck(deck);

    // 最初の配牌
    playerHand[playerCount++] = deck[deckIndex++];
    dealerHand[dealerCount++] = deck[deckIndex++];
    playerHand[playerCount++] = deck[deckIndex++];
    dealerHand[dealerCount++] = deck[deckIndex++];

    // ゲーム開始
    printf("ブラックジャックへようこそ！\n");

    while (1) {
        printf("\nあなたの手札: ");
        printHand(playerHand, playerCount, 0);
        printf("（合計点数: %d）\n", handValue(playerHand, playerCount));

        printf("ディーラーの手札: ");
        printHand(dealerHand, dealerCount, 1); // 最初のカード隠す

        if (handValue(playerHand, playerCount) > 21) {
            printf("バーストしました！あなたの負けです。\n");
            return 0;
        }

        printf("カードを引きますか？（h=ヒット, s=スタンド）: ");
        scanf_s(" %c", &choice);

        if (choice == 'h' || choice == 'H') {
            playerHand[playerCount++] = deck[deckIndex++];
        } else if (choice == 's' || choice == 'S') {
            break;
        } else {
            printf("hかsを入力してください。\n");
        }
    }

    // ディーラーのターン
    printf("\nディーラーの手札: ");
    printHand(dealerHand, dealerCount, 0);
    printf("（合計点数: %d）\n", handValue(dealerHand, dealerCount));

    while (handValue(dealerHand, dealerCount) < 17) {
        printf("ディーラーはカードを引きます。\n");
        dealerHand[dealerCount++] = deck[deckIndex++];
        printf("ディーラーの手札: ");
        printHand(dealerHand, dealerCount, 0);
        printf("（合計点数: %d）\n", handValue(dealerHand, dealerCount));
    }

    int playerPoints = handValue(playerHand, playerCount);
    int dealerPoints = handValue(dealerHand, dealerCount);

    if (dealerPoints > 21) {
        printf("ディーラーがバースト！あなたの勝ちです！\n");
    } else if (playerPoints > dealerPoints) {
        printf("あなたの勝ちです！\n");
    } else if (playerPoints < dealerPoints) {
        printf("あなたの負けです。\n");
    } else {
        printf("引き分けです。\n");
    }

    return 0;
}

void shuffleDeck(Card *deck) {
    for (int i = DECK_SIZE - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        Card temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}

// カードの値を計算（J,Q,Kは10、Aは11または1）
int cardValue(Card c) {
    if (c.value >= 10) return 10;
    if (c.value == 1) return 11;
    return c.value;
}

int handValue(Card *hand, int count) {
    int sum = 0;
    int aceCount = 0;
    for (int i = 0; i < count; i++) {
        int val = cardValue(hand[i]);
        sum += val;
        if (hand[i].value == 1) aceCount++;
    }
    while (sum > 21 && aceCount > 0) {
        sum -= 10; // Aを11から1に切り替え
        aceCount--;
    }
    return sum;
}

void printCard(Card c) {
    char *name;
    switch (c.value) {
        case 1: name = "A"; break;
        case 11: name = "J"; break;
        case 12: name = "Q"; break;
        case 13: name = "K"; break;
        default: {
            static char buf[3];
            snprintf(buf, sizeof(buf), "%d", c.value);
            name = buf;
        }
    }
    printf("%s%s ", c.suit, name);
}

void printHand(Card *hand, int count, int hideFirst) {
    for (int i = 0; i < count; i++) {
        if (i == 0 && hideFirst) {
            printf("[??] ");
        } else {
            printCard(hand[i]);
        }
    }
    printf("\n");
}
}
