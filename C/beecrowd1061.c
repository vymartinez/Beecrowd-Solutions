#include <stdio.h>
 
int main() {
    char dia[4];
    char dia2[4];
    int d1, d2, h1, h2, m1, m2, s1, s2;
    int df, hf, mf, sf;
    scanf("%s %d", dia, &d1);
    scanf("%d : %d : %d", &h1, &m1, &s1);
    scanf("%s %d", dia2, &d2);
    scanf("%d : %d : %d", &h2, &m2, &s2);
    
    if (s1 > s2) {
        m2 -= 1;
        sf = 60 - s1 + s2;
    } else {
        sf = s2 - s1;
    }
    if (m1 > m2) {
        h2 -= 1;
        mf = 60 - m1 + m2;
    } else {
        mf = m2 - m1;
    }
    if (h1 > h2) {
        d2 -= 1;
        hf = 24 - h1 + h2;
    } else {
        hf = h2 - h1;
    }
    df = d2 - d1;
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", df, hf, mf, sf);
    return 0;
}