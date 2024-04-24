#include <stdio.h>
 
int main() {
    int h1, h2, r;
    scanf("%d %d", &h1, &h2);
    if (h1 > h2) {
       r = 24 - h1 + h2;
    }else if(h1 == h2) {
        r = 24;
    } else {
        r = h2 - h1;
    }
    printf("O JOGO DUROU %d HORA(S)\n", r);
    return 0;
}