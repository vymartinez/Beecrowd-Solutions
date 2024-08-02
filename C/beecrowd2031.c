#include <stdio.h>
#include <string.h>
 
int main() {
    int n, j1, j2;
    char jogada[10];
    char jogadas[3][10] = {"ataque", "pedra", "papel"};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        j1 = j2 = 0;
        for (int k = 0; k < 2; k++) {
            scanf("%s", jogada);
            for (int j = 0; j < 3; j++) {
                if (strcmp(jogada, jogadas[j]) == 0 && k == 0) {
                    j1 = j;
                }
                if (strcmp(jogada, jogadas[j]) == 0 && k == 1) {
                    j2 = j;
                }
            }
        }
        if (j1 == j2) {
            if (j1 == 0) {
                printf("Aniquilacao mutua\n");
            } else if (j1 == 1) {
                printf("Sem ganhador\n");
            } else {
                printf("Ambos venceram\n");
            }
        } else {
            if (j1 < j2) {
                printf("Jogador 1 venceu\n");
            } else {
                printf("Jogador 2 venceu\n");
            }
        }
    }
    return 0;
}