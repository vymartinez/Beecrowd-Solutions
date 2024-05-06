#include <stdio.h>
#include <math.h>
int main() {
    int o, exp, num, max;
    while (scanf("%d", &o) != 0) {
        if (o == 0) {
            return 0;
        }
        int mat[o][o];
        max = floor(log10(pow(2, 2*(o-1)))) + 1;
        for (int i = 0; i < o; i++) {
            for (int j = 0; j < o; j++) {
                exp = pow(2, i+j);
                num = floor(log10(exp)) + 1;
                mat[i][j] = exp;
                for(int k = 0; k < max-num; k++) {
                    printf(" ");
                }
                if (j == o-1) {
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