#include <stdio.h>
 
int main() {
    double n, s;
    char sm;
    s = 0;
    double mat[12][12];
    scanf("%c", &sm);
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &n);
            mat[i][j] = n;
            if ((i+j > 11) && (j > i)) {
                s += mat[i][j];
            }
        }
    }
    if (sm == 'S') {
        printf("%.1lf\n", s);
    } else {
        printf("%.1lf\n", s/30);
    }
    return 0;
}