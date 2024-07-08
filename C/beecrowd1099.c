#include <stdio.h>
 
int main() {
    int n, n1, n2, s;
    s = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &n1, &n2);
        if (n2 > n1) {
            int tmp = n1;
            n1 = n2;
            n2 = tmp;
        }
        for (int j = 0; j < n1 - n2-1; j++) {
            if ((n2 + j + 1) % 2 != 0) {
                s += n2 + j + 1;
            }
        }
        printf("%d\n", s);
        s = 0;
    }
    return 0;
}