#include <stdio.h>
 
int main() {
    int n1, n2, pos;
    n2 = 0;
    for (int i = 1; i <= 100; i++) {
        scanf("%d", &n1);
        if (n1 > n2) {
            n2 = n1;
            pos = i;
        }
    }
    printf("%d\n%d\n", n2, pos);
    return 0;
}