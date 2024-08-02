#include <stdio.h>
 
int main() {
    int r;
    double denom = 6, resp = 3;
    scanf("%d", &r);
    for (int i = 1; i < r; i++) {
        denom = 6 + 1.00/denom;
    }
    if (r != 0) {
        resp = 3 + (1/denom);
    }
    printf("%.10lf\n", resp);
    return 0;
}