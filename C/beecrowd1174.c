#include <stdio.h>
 
int main() {
    float a[100];
    float n;
    for (int i = 0; i < 100; i++) {
        scanf("%f", &n);
        a[i] = n;
        if (n <= 10) {
            printf("A[%d] = %.1f\n", i, n);
        }
    }
    return 0;
}