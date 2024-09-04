#include <stdio.h>
 
int main() {
    int l, c, biggest;
    scanf("%d %d", &l, &c);
    int mat[l][c];
    int sum = 0;
    biggest = 0;
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < c; i++) {
        sum = 0;
        for (int j = 0; j < l; j++) {
            sum += mat[j][i];
        }
        if (sum > biggest) {
            biggest = sum;
        }
    }
    for (int i = 0; i < l; i++) {
        sum = 0;
        for (int j = 0; j < c; j++) {
            sum += mat[i][j];
        }
        if (sum > biggest) {
            biggest = sum;
        }
    }
    printf("%d\n", biggest);
    return 0;
}