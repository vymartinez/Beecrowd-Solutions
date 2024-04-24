#include <stdio.h>
 
int main() {
    int n1, n2, c, k, fix;
    k = c = 1;
    scanf("%d", &n1);
    fix = n1;
    while (k == 1) {
        scanf("%d", &n2);
        if (n2 > n1) {
            k++;
            break;
        }
    }
    while (k == 2) {
        if (n1 <= n2) {
            n1 += fix + c;
            c++;
        } else {
            k++;
            break;
        }
    }
    printf("%d\n", c);
    return 0;
}