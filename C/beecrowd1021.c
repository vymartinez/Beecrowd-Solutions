#include <stdio.h>
 
int main() {
    int resto, valor, c, valorm, d;
    double input, restom;
    int valores[] = {100, 50, 20, 10, 5, 2};
    int moedas[] = {100, 50, 25, 10, 5, 1};
    scanf("%lf", &input);
    printf("NOTAS:\n");
    resto = input;
    restom = input - resto;
    for (c = 0; c<6; c++) {
        valor = resto/valores[c];
        printf("%d nota(s) de R$ %d.00\n", valor, valores[c]);
        resto = resto%valores[c];
    }
    d = (restom+resto)*100;
    printf("MOEDAS:\n");
    for(c=0; c<6; c++) {
        valorm = d/moedas[c];
        printf("%d moeda(s) de R$ %.2lf\n", valorm, (moedas[c])/100.00);
        d = d%moedas[c];
    }
        return 0;
}