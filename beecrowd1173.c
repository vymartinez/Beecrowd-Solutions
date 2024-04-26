#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
    int v[10];
    for (int i = 0; i < 10; i++) {
        v[i] = n;
        printf("N[%d] = %d\n", i, n);
        n *= 2;
    }
    return 0;
}