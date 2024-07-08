#include <stdio.h>
 
int main() {
    int n;
    int fib[40] = {1, 1};
    scanf("%d", &n);
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (fib[j] > fib[i]) {
                int temp = fib[i];
                fib[i] = fib[j];
                fib[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (i != n-1) {
            printf("%d ", fib[i]);
        } else {
            printf("%d\n", fib[i]);
        }
    }
    return 0;
}