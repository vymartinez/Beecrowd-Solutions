#include <stdio.h>

int n, k;

int verifySafe(int mat[k][k], int l, int c) {
    int count = 0;
    if (mat[l][c] == 1) {
        count++;
    }
    if (mat[l+1][c] == 1) {
        count++;
    }
    if (mat[l][c+1] == 1) {
        count++;
    }
    if (mat[l+1][c+1] == 1) {
        count++;
    }
    if (count >= 2) {
        return 1;
    }
    return 0;
}
 
int main() {
    scanf("%d", &n);
    k = n+1;
    int mat[k][k];
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int resp = verifySafe(mat, i, j);
            if (resp == 1) {
                printf("S");
            } else {
                printf("U");
            }
        }
        printf("\n");
    }
    return 0;
}