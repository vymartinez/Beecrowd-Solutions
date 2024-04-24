#include <stdio.h>
 
int main() {
    int n, n1, n2, k, s;
    k = s = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &n1, &n2);
        if (n1 % 2 == 0) {
            n1++;
        }
        while (k != n2) {
            s += n1;
            n1 += 2;
            k++;
        }
        printf("%d\n", s);
        s = k = 0;
    }
    return 0;
}