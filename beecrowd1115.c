#include <stdio.h>
 
int main() {
    int x, y, k;
    k = 1;
    while (k == 1) {
        scanf("%d %d", &x, &y);
        if ((x == 0) || (y == 0)) {
            k++;
            return 0;
        } else {
            if (x > 0) {
                if (y > 0) {
                    printf("primeiro\n");
                } else {
                    printf("quarto\n");
                }
            } else {
                if (y > 0) {
                    printf("segundo\n");
                } else {
                    printf("terceiro\n");
                }
            }
        }
        
    }
    
    return 0;
}