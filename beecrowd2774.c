#include <stdio.h>
#include <math.h>
 
int main() {
    int h, m, qt, qt2, k;
    while (scanf("%d %d", &h, &m) != EOF) {
        h *= 60;
        qt = h/m;
        double med, xi, resp, som;
        double val[100000];
        med = som = 0;
        for (int i = 0; i < qt; i++) {
            scanf("%lf", &xi);
            val[i] = xi;
            med += xi;
        }
        med = med/qt;
        
        for (int i = 0; i < qt; i++) {
            som += pow((val[i] - med), 2);
        }
        resp = sqrt((som)/(qt-1));
        printf("%.5lf\n", resp);
    }
    return 0;
}