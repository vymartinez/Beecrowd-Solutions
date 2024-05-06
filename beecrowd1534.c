#include <stdio.h>
 
int main() {
    int n;
    while(scanf("%d", &n) != EOF) {
        int mat[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if ((i + j == n - 1) && (n != 1)) {
                    mat[i][j] = 2;
                } else if (i == j) {
                    mat[i][j] = 1;
                } else {
                    mat[i][j] = 3;
                }
                printf("%d", mat[i][j]);
                if (j == n-1) {
                    printf("\n");
                }
            }
        }
    }
    return 0;
}