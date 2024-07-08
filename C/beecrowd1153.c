#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
    for (int i = n-1; i > 0; i--) {
        n *= i;
    }
    printf("%d\n", n);
    return 0;
}