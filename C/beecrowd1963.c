#include <stdio.h>
 
int main() {
    double p, pi, resp;
    scanf("%lf %lf", &pi, &p);
    resp = p - pi;
    resp = resp/pi * 100.00;
    printf("%.2lf%%\n", resp);
    return 0;
}