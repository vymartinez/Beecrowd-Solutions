#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int n, nv, ne, d, k;
    ne = 0;
    scanf("%d", &n);
    k = n-1;
    int valores[n];
    if (n == 1) {
        printf("1\n");
    } else {
        for (int i = 0; i < n; i++) {
            scanf("%d", &nv);
            valores[i] = nv;
        }
        for (int i = 0; i < n-1; i++) {
            if (i == 0) {
                d = abs(valores[i] - valores[i+1]);
                ne++;
            } else {
                if (abs(valores[i] - valores[i+1]) != d) {
                    ne++;
                    d = abs(valores[i] - valores[i+1]);
                }
            }
        }
        printf("%d\n", ne);
    }
    return 0;
}