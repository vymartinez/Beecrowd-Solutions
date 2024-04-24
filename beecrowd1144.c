#include <stdio.h>
 
int main() {
    int n, k;
    k = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d %d %d\n%d %d %d\n", k, k*k, k*k*k, k, k*k+1, k*k*k+1);
        k += 1;
    }
    return 0;
}