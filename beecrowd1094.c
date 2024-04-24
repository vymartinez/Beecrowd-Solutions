#include <stdio.h>
 
int main() {
    int n, num, tc, ts, tr;
    double t;
    t = tr = ts = tc = 0;
    scanf("%d", &n);
    char letra[1];
    for (int i = 0; i < n; i++) {
        scanf("%d %c", &num, letra);
        if (letra[0] == 'C') {
            tc += num;
        } else if (letra[0] == 'S') {
            ts += num;
        } else {
            tr += num;
        }
        t += num;
    }
    printf("Total: %.0lf cobaias\n", t);
    printf("Total de coelhos: %d\n", tc);
    printf("Total de ratos: %d\n", tr);
    printf("Total de sapos: %d\n", ts);
    printf("Percentual de coelhos: %.2lf %%\n", (tc/t)*100.00);
    printf("Percentual de ratos: %.2lf %%\n", (tr/t)*100.00);
    printf("Percentual de sapos: %.2lf %%\n", (ts/t)*100.00);
    return 0;
}