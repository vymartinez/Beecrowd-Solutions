#include <stdio.h>
#include <string.h>
 
int main() {
    int n, n1, n2, res;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char jogada1[6];
        char jogada2[6];
        char jogador1[100];
        char jogador2[100];
        scanf("%s %s %s %s", jogador1, jogada1, jogador2, jogada2);
        scanf("%d %d", &n1, &n2);
        res = n1 + n2;
        if ((strcmp(jogada1, "PAR") == 0 && res % 2 == 0) || (strcmp(jogada1, "IMPAR") == 0 && res % 2 != 0)) {
            printf("%s\n", jogador1);
        } else {
            printf("%s\n", jogador2);
        }
    }
    return 0;
}