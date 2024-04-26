#include <stdio.h>
 
int main() {
    double n, s;
    char sm[1];
    s = 0;
    int l;
    double mat[12][12];
    scanf("%d %c", &l, &sm);
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &n);
            mat[i][j] = n;
        }
    }
    for (int j = 0; j < 12; j++) {
        s += mat[l][j];
    }
    if (sm == "s") {
        printf("%.1lf\n", s);
    } else {
        printf("%.1lf\n", s/12);
    }
    return 0;
}