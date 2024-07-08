#include <stdio.h>
 
int main() {
    int n, s, bola;
    s = 0;
    for (int i = 0; i < 9; i++) {
        scanf("%d", &n);
        s+= n;
    }
    char nomes[9][9] = {"Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner", "Blitzen", "Rudolph"};
    for (bola = 1; bola <= 9; bola++) {
        s--;
        if (s == 0) {
            break;
        } else {
            if (bola == 9) {
                bola = 0;
            }
        }
    }
    printf("%s\n", nomes[bola-1]);
    return 0;
}