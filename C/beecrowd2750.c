#include <stdio.h>
 
int main() {
    int zero = 0, um = 1, dois = 2, tres = 3,
    quatro = 4, cinco = 5, seis = 6,
    sete = 7, oito = 8, nove = 9,
    dez = 10, onze = 11, doze = 12,
    treze = 13, catorze = 14, quinze = 15;
    for (int i = 0; i < 39; i++) {
        printf("-");
    }
    printf("\n");
    for (int j = 0; j < 39; j++) {
        if (j == 0 || j == 38 || j == 12 || j == 22) {
            printf("|");
        } else {
            if (j == 3) {
                printf("decimal");
                j = 9;
            } else if (j == 15) {
                printf("octal");
                j = 19;
            } else if (j == 25) {
                printf("Hexadecimal");
                j = 35;
            } else {
                printf(" ");
            }
        }
    }
    printf("\n");
    for (int i = 0; i < 39; i++) {
        printf("-");
    }
    printf("\n");
    for (int i = 0; i < 16; i++) {
        for (int j = 0; j < 39; j++) {
            if (j == 0 || j == 38 || j == 12 || j == 22) {
                printf("|");
            } else {
                if (j == 7 && i < 10) {
                    printf("%d", i);
                } else if (j == 6 && i >= 10) {
                    printf("%d", i);
                    j += 1;
                } else if (j == 17 && i < 8) {
                    printf("%o", i);
                } else if (j == 16 && i >= 8) {
                    printf("%o", i);
                    j += 1;
                } else if (j == 30) {
                    printf("%X", i);
                } else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    for (int i = 0; i < 39; i++) {
        printf("-");
    }
    printf("\n");
    return 0;
}