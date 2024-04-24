#include <stdio.h>
 
int main() {
    int cod, i;
    scanf("%d %d", &cod, &i);
    float preco[] = {4.00, 4.50, 5.00, 2.00, 1.50};
    printf("Total: R$ %.2f\n", (preco[cod-1]*i));
    return 0;
}