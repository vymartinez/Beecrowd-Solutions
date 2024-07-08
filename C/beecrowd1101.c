#include <stdio.h>
 
int main() {
    int n1, n2, c, s;
    c = s = 0;
    while (c == 0) {
        scanf("%d %d", &n1, &n2);
        if ((n1 <= 0) || (n2 <= 0)) {
            return 0;
        } else {
            if (n1 < n2) {
                int tmp = n1;
                n1 = n2;
                n2 = tmp;
            }
            for (int i = n2; i <= n1; i++) {
                printf("%d ", i);
                s += i;
            }
            printf("Sum=%d\n", s);
            s = 0;
        }
    }
    return 0;
}