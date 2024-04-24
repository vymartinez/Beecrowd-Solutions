#include <stdio.h>
 
int main() {
    int a, b, c, d, resposta;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    resposta = (a*b) - (c*d);
    printf("DIFERENCA = %d\n", resposta);
    return 0;
}