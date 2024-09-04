#include <stdio.h>
 
int main() {
    int n1, n2, n;
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &n1, &n2);
        while (n1 % n2 != 0) {
            int n3 = n1 % n2;
            n1 = n2;
            n2 = n3;
        }
        printf("%d\n", n2);
    }
    return 0;
}