#include <stdio.h>
 
int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    if (n2 > n1) {
        int tmp = n1;
        n1 = n2;
        n2 = tmp;
    }
    for (int i = n2 + 1; i < n1; i++) {
        if ((i % 5 == 2) || (i % 5 == 3)) {
            printf("%d\n", i);
        }
    }
    return 0;
}