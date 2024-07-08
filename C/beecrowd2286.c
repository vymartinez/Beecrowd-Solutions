#include <stdio.h>
 
int main() {
    int n, n1, n2, count;
    count = 1;
    n = 1;
    char prim[11];
    char seg[11];
    while (n != 0) {
        scanf("%d", &n);
        if (n == 0) {
            return 0;
        } else {
            printf("Teste %d\n", count);
            scanf("%s %s", prim, seg);
            for (int i = 1; i <= n; i++) {
                scanf("%d %d", &n1, &n2);
                if ((n1 + n2) % 2 == 0) {
                    printf("%s\n", prim);
                } else {
                    printf("%s\n", seg);
                }
            }
            count++;
            printf("\n");
        }
    }
    
    return 0;
}