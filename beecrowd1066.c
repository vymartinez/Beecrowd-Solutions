#include <stdio.h>
 
int main() {
    int pos, n, neg, imp, par;
    par = imp = pos = neg = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &n);
        if (n > 0) {
            pos++;
        } else if (n < 0){
            neg++;
        }
        if (n % 2 == 0) {
            par++;
        } else {
            imp++;
        }
    }
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", imp);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);
    return 0;
}