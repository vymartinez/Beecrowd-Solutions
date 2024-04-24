#include <stdio.h>
 
int main() {
    int ddd, c;
    c = 0;
    scanf("%d", &ddd);
    int ddds[] = {61, 71, 11, 21, 32, 19, 27, 31};
    char locais[][15] = {"Brasilia", "Salvador", "Sao Paulo", "Rio de Janeiro", "Juiz de Fora", "Campinas", "Vitoria", "Belo Horizonte"};
    for (int i = 0; i < 8; i++) {
        if (ddd == ddds[i]) {
            printf("%s\n", locais[i]);
            c++;
        }
    }
    if (c == 0) {
        printf("DDD nao cadastrado\n");
    }
    return 0;
}