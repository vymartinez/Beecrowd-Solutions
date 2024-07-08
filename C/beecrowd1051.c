#include <stdio.h>
 
int main() {
    double s, sf;
    scanf("%lf", &s);
    if (s <= 2000) {
        printf("Isento\n");
    } else if ((s >2000) && (s <= 3000)) {
        s -= 2000;
        printf("R$ %.2lf\n", s*0.08);
    } else if((s > 3000) && (s <= 4500)) {
        s -= 3000;
        sf = 1000 * 0.08 + s*0.18;
        printf("R$ %.2lf\n", sf);
    }else if (s > 4500) {
        s -= 4500;
        sf = 1000*0.08 + 1500*0.18 + s*0.28;
        printf("R$ %.2lf\n", sf);
    }
    return 0;
}