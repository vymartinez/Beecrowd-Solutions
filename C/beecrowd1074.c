#include <stdio.h>
 
int main() {
    int x, n;
    scanf("%d", &x);
    for (int i = 0; i < x; i++) {
        scanf("%d", &n);
        if ((n > 0)) {
            if (n % 2 == 0) {
                    printf("EVEN POSITIVE\n");
            } else {
                    printf("ODD POSITIVE\n");
            }
        } else if (n < 0) {
            if (n % 2 == 0) {
                printf("EVEN NEGATIVE\n");
            } else {
                printf("ODD NEGATIVE\n");
            }
        } else {
            printf("NULL\n");
        }
        
    }
    return 0;
}