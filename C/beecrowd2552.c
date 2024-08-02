#include <stdio.h>

int l, c;

int paesDeQueijo(int mat[l][c], int i, int j) {
    int total = 0;
    if (mat[i][j] == 1) {
        return 9;
    } else {
        if ((j + 1) < c) {
            if (mat[i][j+1] == 1) {
                total += 1;
            }
        }
        if (j - 1 >= 0) {
            if (mat[i][j-1] == 1) {
                total += 1;
            }
        }
        if (i + 1 < l) {
            if (mat[i+1][j] == 1) {
                total += 1;
            }
        }
        if (i - 1 >= 0) {
            if (mat[i-1][j] == 1) {
                total += 1;
            }
        }
    }
    return total;
}
 
int main() {
    int total;
    while (scanf("%d %d", &l, &c) != EOF) {
        int pos[l][c];
        for (int i = 0; i < l; i++) {
            for (int j = 0; j < c; j++) {
                scanf("%d", &pos[i][j]);
            }
        }
        for (int i = 0; i < l; i++) {
            for (int j = 0; j < c; j++) {
                total = paesDeQueijo(pos, i, j);
                printf("%d", total);
            }
            printf("\n");
        }
    }
    return 0;
}