#include <stdio.h>
#include <math.h>
 
int main() {
    int x1, y1, x2, y2, v, r1, r2;
    double d1, d2;
    while(scanf("%d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &v, &r1, &r2) != EOF) {
        d1 = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
        d2 = v * 1.50;
        if (d1 + d2 > r1 + r2) {
            printf("N\n");
        } else {
            printf("Y\n");
        }
    }
    return 0;
}