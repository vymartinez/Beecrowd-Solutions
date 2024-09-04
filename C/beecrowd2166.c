#include <stdio.h>
 
int main() {
    int r;
    double denom = 2, resp = 1;
    scanf("%d", &r);
    for (int i = 1; i < r; i++) {
        denom = 2 + 1.00/denom;
    }
    if (r != 0) {
        resp = 1 + (1/denom);
    }
    printf("%.10lf\n", resp);
    return 0;
}