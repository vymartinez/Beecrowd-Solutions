#include <stdio.h>
 
int main() {    
    char nome[10];
    double salario, vendas, total;
    scanf("%s %lf %lf", nome, &salario, &vendas);
    total = 0.15*vendas + salario;
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}