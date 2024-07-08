#include <stdio.h>
 
int main() {
    float n, med;
    int k1, k2, nn;
    k1 = 1;
    med = nn = k2 = 0;
    while (k1 == 1) {
        if (nn < 2) {
            scanf("%f", &n);
            if ((n >= 0) && (n <= 10)) {
                med += n;
                nn++;
            } else {
                printf("nota invalida\n");
            }
        } else {
            printf("media = %.2f\n", med/2);
            nn = 0;
            while ((k2 < 1) || (k2 > 2)) {
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d", &k2);
            }
            k1 = k2;
            k2 = 0;
            med = 0;
        }
    }
    return 0;
}