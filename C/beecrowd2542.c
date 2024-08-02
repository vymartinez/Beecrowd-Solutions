#include <stdio.h>
 
int main() {
    int atb, cardsM, cardsL, pickM, pickL, pick, highestM, highestL;
    while (scanf("%d %d %d", &atb, &cardsM, &cardsL) != EOF) {
        highestM = highestL = 0;
        int atbM[cardsM][atb];
        int atbL[cardsL][atb];
        for (int j = 0; j < cardsM; j++) {
            for (int i = 0; i < atb; i++) {
                scanf("%d", &atbM[j][i]);
            }
        }
        for (int j = 0; j < cardsL; j++) {
            for (int i = 0; i < atb; i++) {
                scanf("%d", &atbL[j][i]);
            }
        }
        scanf("%d %d %d", &pickM, &pickL, &pick);
        for (int i = 0; i < cardsM; i++) {
            if (atbM[pickM-1][pick-1] > highestM) {
                highestM = atbM[pickM-1][pick-1];
            }
        }
        for (int i = 0; i < cardsL; i++) {
            if (atbL[pickL-1][pick-1] > highestL) {
                highestL = atbL[pickL-1][pick-1];
            }
        }
        if (highestM > highestL) {
            printf("Marcos\n");
        } else if (highestL > highestM) {
            printf("Leonardo\n");
        } else {
            printf("Empate\n");
        }
    }
    return 0;
}