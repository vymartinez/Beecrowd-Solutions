#include <stdio.h>
 
int main() {
    int x[10] = {};
    int n;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        if (n > 1) {
            x[i] = n;
        } else {
            x[i] = 1;
        }
        printf("X[%d] = %d\n", i, x[i]);
    }
    return 0;
}