#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
int gritos, cod, resp, codf;
char c[3];
char bin[3];
gritos = 1;
codf = 0;
while (gritos <= 6) {
    scanf("%s", c);
    if ((strcmp(c, "caw") == 0)) {
        if (gritos % 2 == 0){
            resp = codf;
            codf = 0;
            printf("%d\n", resp);
            gritos++;
        } else {
            gritos++;
        }
    } else {
        for (int i = 0; i < 3; i++) {
            if(c[i] == '-') {
                bin[i] = '0';
            } else if (c[i] == '*') {
                bin[i] = '1';
            }
        }
            switch(atoi(bin)) {
                case 1:
                    cod = 1;
                break;
                case 10:
                    cod = 2;
                break;
                case 11:
                    cod = 3;
                break;
                case 100:
                    cod = 4;
                break;
                case 101:
                    cod = 5;
                break;
                case 110:
                    cod = 6;
                break;
                case 111:
                    cod = 7;
                break;
            }
            codf += cod;
    }
}
    return 0;
}