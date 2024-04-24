#include <stdio.h>
 
int main() {
    int m1, m2, h1, h2, hf, mf;
    mf = hf = 0;
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    if (m1 > m2) {
        mf = 60 - m1 + m2;
        h2-=1;
    } else {
        mf = m2 - m1;
    }
    if (h1 > h2) {
        hf = 24 - h1 + h2;
    } else {
        hf = h2 - h1;
    }
    if ((h1 == h2) && (m1 == m2)) {
        hf = 24;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hf, mf);
    return 0;
}