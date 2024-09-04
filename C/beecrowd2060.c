#include <stdio.h>
 
int main() {
    int n, num, n2, n3, n4, n5;
    scanf("%d", &n);
    n2 = n3 = n4 = n5 = 0;
    while (n--) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            n2++;
        }
        if (num % 3 == 0) {
            n3++;
        }
        if (num % 4 == 0) {
            n4++;
        }
        if (num % 5 == 0) {
            n5++;
        }
    }
    printf("%d Multiplo(s) de %d\n", n2, 2);
    printf("%d Multiplo(s) de %d\n", n3, 3);
    printf("%d Multiplo(s) de %d\n", n4, 4);
    printf("%d Multiplo(s) de %d\n", n5, 5);
    return 0;
}