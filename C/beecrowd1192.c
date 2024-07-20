#include <stdio.h>
 
int main() {
    int n, n1, n2;
    char l;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d%c%d", &n1, &l, &n2);
        if (n1 == n2) {
            printf("%d\n", n1*n2);
        } else if (l < 91) {
            printf("%d\n", n2-n1);
        } else {
            printf("%d\n", n1+n2);
        }
    }
    return 0;
}