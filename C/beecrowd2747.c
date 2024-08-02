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
                printf(" ");
            
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