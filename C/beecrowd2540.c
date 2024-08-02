#include <stdio.h>
 
int main() {
    int n, voto, imp;
    while (scanf("%d", &n) != EOF) {
        imp = 0;
        for (int i = 0; i< n; i++) {
            scanf("%d", &voto);
            if (voto == 1) {
                imp++;
            }
        }
        double limite = (2 * n)/3.00;
        if (imp >= limite) {
            printf("impeachment\n");
        } else {
            printf("acusacao arquivada\n");
        }
    }
    return 0;
}