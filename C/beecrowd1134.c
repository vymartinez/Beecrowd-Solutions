#include <stdio.h>
 
int main() {
    int c, a, g, d;
    c = a = d = g = 0;
    while (c != 4) {
        scanf("%d", &c);
        switch(c) {
            case 1:
                a++;
            break;
            case 2:
                g++;
            break;
            case 3: 
                d++;
            break;
            default:
            break;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", a);
    printf("Gasolina: %d\n", g);
    printf("Diesel: %d\n", d);
    return 0;
}