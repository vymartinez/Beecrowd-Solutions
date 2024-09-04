#include <stdio.h>
 
int main() {
    double n1, n2;
    scanf("%lf %lf", &n1, &n2);
    printf("%.6lf\n", ((((1.0 + n1/100.00) * (1.0 + n2/100.00)) - 1.0) * 100.0));
    return 0;
}