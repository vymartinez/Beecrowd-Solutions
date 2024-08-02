#include <stdio.h>
 
int main() {
    int n, nota, carga, sum1, sum2;
    double resp;
    while (scanf("%d", &n) != EOF) {
        sum1 = sum2 = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d %d", &nota, &carga);
            sum1 += nota*carga;
            sum2 += carga;
        }
        resp = sum1/(sum2*100.00);
        printf("%.4lf\n", resp);
    }
    return 0;
}