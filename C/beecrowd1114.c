#include <stdio.h>
 
int main() {
    int s, c;
    c = 1;
    while (c == 1) {
        scanf("%d", &s);
        if (s == 2002) {
            printf("Acesso Permitido\n");
            return 0;
        } else {
            printf("Senha Invalida\n");
        }
    }
    return 0;
}