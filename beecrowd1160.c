#include <stdio.h>
 
int main() {
    int t, pa, pb, k, tmp;
    double ga, gb, g1, g2;
    tmp = 0;
    k = 1;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d %lf %lf", &pa, &pb, &ga, &gb);
        pa = pa;
        pb = pb;
        while (k == 1) {
            tmp++;
            g1 = pa*(ga/100.0);
            g2 = pb*(gb/100.0);
            pa += g1;
            pb += g2;
            if ((pa > pb) || (tmp > 100)) {
                k++;
                break;
            }
        }
        if (tmp < 101) {
            printf("%d anos.\n", tmp);
        } else {
            printf("Mais de 1 seculo.\n");
        }
        k = 1;
        tmp = 0;
    }
    return 0;
}