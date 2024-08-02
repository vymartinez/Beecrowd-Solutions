#include <stdio.h>
#include <math.h>
 
int main() {
    int h, m, s;
    double n;
    while (scanf("%lf", &n) != EOF) {
        h = m = s = 0;
        if (n >= 0 && n < 90) {
            printf("Bom Dia!!\n");
        } else if (n >= 90 && n < 180) {
            printf("Boa Tarde!!\n");
        } else if (n >= 180 && n < 270) {
            printf("Boa Noite!!\n");
        } else {
            printf("De Madrugada!!\n");
        }
        h = 6 + floor(n/15);
        n -= 15*(h-6);
        if (n >= 0) {
            m = floor(n*4);
            n -= m/4.00;
        }
        if (n >= 0) {
            s = n*240;
        }
        if (h < 10) {
            printf("0%d:", h);
        } else if (h >= 24) {
            h -= 24;
            printf("0%d:", h);
        } else {
            printf("%d:", h);
        }
        if (m < 10) {
            printf("0%d:", m);
        } else {
            printf("%d:", m);
        }
        if (s < 10) {
            printf("0%d\n", s);
        } else {
            printf("%d\n", s);
        }
    }
    return 0;
}