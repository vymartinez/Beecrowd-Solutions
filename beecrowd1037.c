#include <stdio.h>
 
int main() {
    double i;
    int n1, n2, k, c;
    scanf("%lf", &i);
    n1 = k = c = 0;
    n2 = 25;
    if ((i >= 0) && (i <= 100)) {
        while (c == 0){
            if ((i > n1) && (i <= n2) || (i == 0)) {
                c++;
            } else {
                k++;
                n1 += 25;
                n2 += 25;
            }
        }
        switch(k) {
            case 0:
                printf("Intervalo [0,25]\n");
            break;
            case 1:
                printf("Intervalo (25,50]\n");
            break;
            case 2:
                printf("Intervalo (50,75]\n");
            break;
            case 3:
                printf("Intervalo (75,100]\n");
            break;
        }
    } else {
        printf("Fora de intervalo\n");
    }
    return 0;
}