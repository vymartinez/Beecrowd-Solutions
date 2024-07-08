#include <stdio.h>
#include <string.h>
 
int main() {
    int n, r, s;
    scanf("%d", &n);
    char sheld[10];
    char raj[10];
    char jogadas[5][10] = {"Spock", "lagarto", "tesoura", "pedra", "papel"};
    for(int i = 1; i <= n; i++) {
        scanf("%s %s", sheld, raj);
        for(int j = 0; j < 5; j++) {
            if(strcmp(raj, jogadas[j]) == 0) {
                r = j;
            }
            if(strcmp(sheld, jogadas[j]) == 0) {
                s = j;
            }
        }
        if(r == s) {
            printf("Caso #%d: De novo!\n", i);
        }else {
            if((s == 0 && ((r == 1) ||(r == 4))) || (s == 1 && ((r == 2) ||(r == 3)))
            || (s == 2 && ((r == 0) ||(r == 3))) || (s == 3 && ((r == 4) ||(r == 0)))
            || (s == 4 && ((r == 1) ||(r == 2)))) {
                printf("Caso #%d: Raj trapaceou!\n", i);
            }
            else {
                printf("Caso #%d: Bazinga!\n", i);
            }
        }
    }
    return 0;
}