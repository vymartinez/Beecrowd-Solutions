#include <stdio.h>
 
int main() {
    int n, num;
    scanf("%d", &n);
    long long int fib[61] = {0,1};
    for (int k = 2; k < 61; k++) {
        fib[k] = fib[k-1] + fib[k-2];
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        printf("Fib(%d) = %lld\n", num, fib[num]);
    }
    return 0;
}