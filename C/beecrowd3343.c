#include <stdio.h>
int main() {
    int titas, p, m, g, muros, taminicial, ultimog, ultimom, ultimop;
    muros = 1;
    ultimom = ultimog = ultimop = 0;
    scanf ("%d %d", &titas, &taminicial);
    char tamanhos[titas];
    int restos[300000] = {taminicial};
    scanf("%s", tamanhos);
    scanf("%d %d %d", &p, &m, &g);
    for (int i = 0; i < titas; i++) {
        if (tamanhos[i] == 'G') {
            for (int j = 0; j < muros; j++) {
                j = ultimog;
                if (restos[j] >= g) {   
                    restos[j] -= g;
                    break;
                } else if ((restos[j] < g)) {
                    ultimog = j+1;
                    i--;
                    if (j+1 == muros) {
                        restos[j+1] = taminicial;
                        muros++;
                    } 
                    break;
                }
            }
        } else if (tamanhos[i] == 'M') {
            for (int j = 0; j < muros; j++) {
                j = ultimom;
                if (restos[j] >= m) {
                    restos[j] -= m;
                    break;
                } else if ((restos[j] < m)){
                    ultimom = j+1;
                    i--;
                    if (j+1 == muros) {
                        restos[j+1] = taminicial;
                        muros++;
                    } 
                    break;
                }
            }

        } else if (tamanhos[i] == 'P') {
            for (int j = 0; j < muros; j++) {
                j = ultimop;
                if (restos[j] >= p) {
                    restos[j] -= p;
                    break;
                } else if ((restos[j] < p)){
                    ultimop = j+1;
                    i--;
                    if (j+1 == muros) {
                        restos[j+1] = taminicial;
                        muros++;
                    } 
                    break;
                }
            }

        }
    }
    printf("%d\n", muros);
    return 0;
}