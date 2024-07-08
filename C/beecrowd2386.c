#include <stdio.h>
 
int main() {
    int tel, n, star, total;
    total = 0;
    scanf("%d %d", &tel, &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &star);
        if (tel * star >= 40000000) {
            total++;
        }
    }
    printf("%d\n", total);
    return 0;
}