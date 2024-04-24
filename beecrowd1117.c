#include <stdio.h>
 
int main() {
    int p;
    float n, med;
    p = med = 0;
    while (p < 2) {
        scanf("%f", &n);
        if ((n < 0.0) || (n > 10.0)) {
            printf("nota invalida\n");
        } else {
            med += n;
            p++;
        }
    }
    printf("media = %.2f\n", med/2);
    return 0;
}