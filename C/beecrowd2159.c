#include <stdio.h>
#include <math.h>
 
int main() {
    int n;
    double p, m;
    scanf("%d", &n);
    p = n/log(n);
    m = 1.25506 * (n/log(n));
    printf("%.1lf %.1lf\n", p, m);
    return 0;
}