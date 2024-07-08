#include <stdio.h>
 
int main() {
    int n, k, s;
    n = k = 1;
    s = 0;
    while (k == 1) {
        scanf("%d", &n);
        if (n == 0) {
            return 0;
        } else {
            if ((n % 2 == 1) || (n % 2 == -1)) {
                n++;
            }
            for (int i = n; i <= n + 8; i += 2) {
                s += i;
            }
            printf("%d\n", s);
            s = 0;
        }
    }
    return 0;
}