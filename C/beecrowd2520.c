#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int l, c, meL, meC, pokeL, pokeC;
    while(scanf("%d %d", &l, &c) != EOF) {
        int pos[l][c];
        for (int i = 0; i < l; i++) {
            for ( int j = 0; j < c; j++) {
                scanf("%d", &pos[i][j]);
                if (pos[i][j] == 2) {
                    pokeL = i;
                    pokeC = j;
                } else if (pos[i][j] == 1) {
                    meL = i;
                    meC = j;
                }
            }
        }
        printf("%d\n", (abs(meL - pokeL) + abs(meC - pokeC)));
    }
        return 0;
}