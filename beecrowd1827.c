#include <stdio.h>
 
int main() {
    int n;
    while(scanf("%d", &n) != EOF) {
        int mat[n][n];
        int uns = n/3;
        int centro = (n-1)/2;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if ((i >= uns) && ( i <= n - uns - 1)) {
                    if ((i == centro) && (j == centro)) {
                        mat[i][j] = 4;
                    }else if ((j >= uns) && (j <= n - uns - 1)) {
                        mat[i][j] = 1;
                    } else {
                        mat[i][j] = 0;
                    }
                } else {
                    if (j == i) {
                        mat[i][j] = 2;
                    } else if ((i + j) == n - 1) {
                        mat[i][j] = 3;
                    } else {
                        mat[i][j] = 0;
                    }
                }
                if (j == n - 1) {
                    printf("%d\n", mat[i][j]);
                } else{
                    printf("%d", mat[i][j]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}