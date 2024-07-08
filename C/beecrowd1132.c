#include <stdio.h>
 
int main() {
    int n1, n2, s;
    s = 0;
    scanf("%d %d", &n1, &n2);
    if (n2 > n1) {
        int tmp = n1;
        n1 = n2;
        n2 = tmp;
    }
    for (int i = n2; i <= n1; i++) {
        if (i % 13 != 0) {
            s += i;
        }
    }
    printf("%d\n", s);
    return 0;
}