#include <stdio.h>
 
int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    for (int i = 1; i <= n2; i++) {
        if (i % n1 == 0) {
            printf("%d\n", i);
        } else {
            printf("%d ", i);
        }
    }
    return 0;
}