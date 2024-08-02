#include <stdio.h>
 
int main() {
    for (int i = 0; i < 39; i++) {
        printf("-");
    }
    printf("\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 39; j++) {
            if (j == 0 || j == 38) {
                printf("|");
            } else {
                if (j == 9) {
                    if (i == 0) {
                        printf("Roberto");
                        j = 15;
                    } else if (i == 2) {
                        printf("5786");
                        j = 12;
                    } else if (i == 4) {
                        printf("UNIFEI");
                        j = 14;
                    } else {
                        printf(" ");
                    }
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