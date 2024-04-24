#include <stdio.h>
 
int main() {
    int n, c;
    c = 1;
    while (c == 1) {
        scanf("%d", &n);
        if (n == 0) {
            return 0;
        } else {
            for (int i = 1; i < n; i++) {
                printf("%d ", i);
            }
            printf("%d\n", n);
        }
    }
    return 0;
}