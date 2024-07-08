#include <stdio.h>
#include <math.h>
int main() {
    int n, carac;
    while(scanf("%d", &n) != 0) {
        if (n == 0) {
            break;
        }
        int mat[n][n];
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    mat[i][j] = abs(i - j) + 1;
                    carac = floor(log10(mat[i][j])) + 1;
                    for (int s = 0; s < 3 - carac; s++) {
                        printf(" ");
                    }
                    if (j == n-1) {
                        printf("%d\n", mat[i][j]);
                    } else {
                        printf("%d ", mat[i][j]);
                    }
                }
            }
        printf("\n");
    }
    return 0;
}