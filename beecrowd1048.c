#include <stdio.h>
 
int main() {
    double s, r, sf;
    int p;
    int reaj[] = {15, 12, 10, 7, 4};
    double sal[] = {0.00, 400.00, 800.00, 1200.00, 2000.00};
    scanf("%lf", &s);
    for (int i = 0; i < 4; i++){
        for (int j = i+1; j < 5; j++) {
            if ((s > sal[i]) && (s <= sal[j])) {
                r = ((reaj[i])/100.00)*s;
                sf = s + r;
                p = reaj[i];
            }
        }
    }
    if (s > 2000) {
        r = 0.04*s;
        sf = s + r;
        p = 4;
    }
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", sf, r, p);
    return 0;
}