#include <stdio.h>
#include <math.h>
 
int main() {
    int n1, n2, resp;
    double p;
    n1 = 1;
    while (n1 != 0) {
        scanf("%d %d %lf", &n1, &n2, &p);
        if (n1 == 0) {
            return 0;
        }
        p = p/100.00;
        resp = floor(sqrt((n1 * n2)/p));
        printf("%d\n", resp);
    }
    return 0;
}