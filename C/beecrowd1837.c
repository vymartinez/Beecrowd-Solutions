#include <stdio.h>
#include <math.h>
 
int main() {
    int n1, n2, r, q;
    scanf("%d %d", &n1, &n2);
    if (n1 >= 0) {
        r = n1 % n2;
        q = (n1 - r) / n2;
    } else {
        for(r = 0; r < abs(n2); r++) {
            if ((n1 - r)%n2 == 0) {
                q = (n1 - r) / n2;
                break;
            }
        }
    }
    printf("%d %d\n", q, r);
    return 0;
}