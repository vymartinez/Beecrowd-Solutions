#include <stdio.h>
 
int main() {
    int t, n;
    scanf("%d", &t);
    while (t != 0) {
        for (int i = 0; i < t; i++) {
            scanf("%d", &n);
            if (n % 2 == 0) {
                printf("%d\n", ((n-2)*2) + 2);
            } else {
                printf("%d\n", ((n-1)*2) + 1);
            }
        }
        scanf("%d", &t);
    }
    return 0;
}