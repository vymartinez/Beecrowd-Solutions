#include <stdio.h>
 
int main() {
    int n1, n2, s, k;
    s = 0;
    k = 1;
    scanf("%d %d", &n1, &n2);
    while (k == 1) {
        if (n2 > 0) {
            k++;
            break;
        } else {
            scanf("%d",&n2);
        }
    }
    for (int i = 0; i <= n2-1; i++) {
        s += n1+i;
    }
    printf("%d\n", s);
    return 0;
}