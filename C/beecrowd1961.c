#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int j, canos, cano, alt;
    scanf("%d %d", &j, &canos);
    for (int i = 0; i < canos; i++) {
        scanf("%d", &cano);
        if (i == 0) {
            alt = cano;
        }
        if (abs(alt - cano) > j) {
            printf("GAME OVER\n");
            return 0;
        } else {
            alt = cano;
        }
    }
    printf("YOU WIN\n");
    return 0;
}