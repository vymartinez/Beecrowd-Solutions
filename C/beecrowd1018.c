#include <stdio.h>
 
int main() {
    int input, resto, valor, c;
    int valores[] = {100, 50, 20, 10, 5, 2, 1};
    scanf("%d", &input);
    printf("%d\n", input);
    resto = input;
    for (c = 0; c<=6; c++) {
        valor = resto/valores[c];
        printf("%d nota(s) de R$ %d,00\n", valor, valores[c]);
        resto = resto%valores[c];
    }
    return 0;
}