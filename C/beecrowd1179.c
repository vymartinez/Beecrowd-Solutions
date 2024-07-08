#include <stdio.h>
 
int main() {
    int n, p, imp;
    p = imp = 0;
    int pares[5];
    int impares[5];
    for (int i = 0; i < 15; i++) {
        scanf("%d", &n);
        if (n % 2 == 0) {
            pares[p] = n;
            p++;
            if (p == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, pares[j]);
                }
                p = 0;
            }
        } else {
            impares[imp] = n;
            imp++;
            if (imp == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, impares[j]);
                }
                imp = 0;
            }
        }
    }
    for (int j = 0; j < imp; j++) {
        printf("impar[%d] = %d\n", j, impares[j]);
    }
    for (int i = 0; i < p; i++) {
        printf("par[%d] = %d\n", i, pares[i]);
    }
    return 0;
}