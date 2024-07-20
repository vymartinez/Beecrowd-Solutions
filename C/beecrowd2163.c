#include <stdio.h>

int l, c;

int verifySaber(int x, int y, int pos[l][c]) {
    if (x + 1 < l && y + 1 < c && x - 1 >= 0 && y - 1 >= 0) {
        if (pos[x-1][y] == 7 &&pos[x+1][y] == 7 && pos[x][y-1] == 7 && pos[x][y+1] == 7 &&
        pos[x-1][y-1] == 7 && pos[x-1][y+1] == 7 && pos[x+1][y+1] == 7 && pos[x+1][y-1] == 7) {
            printf("%d %d\n", x+1, y+1);
            return 1;
        }
    }
    return 0;
}
 
int main() {
    scanf("%d %d", &l, &c);
    int retorno, pos[l][c];
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &pos[i][j]);
        }
    }
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            if (pos[i][j] == 42) {
                retorno = verifySaber(i, j, pos);
                if (retorno == 1) {
                    return 0;
                }
            }
        }
    }
    printf("0 0\n");
    return 0;
}