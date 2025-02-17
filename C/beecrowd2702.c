#include <stdio.h>
 
int main() {
    int n1, n2, n3, p1, p2, p3, sum;
    sum = 0;
    scanf("%d %d %d %d %d %d", &n1, &n2, &n3, &p1, &p2, &p3);
    if (n1 < p1) {
        sum += p1-n1;
    }
    if (n2 < p2) {
        sum += p2-n2;
    }
    if (n3 < p3) {
        sum += p3-n3;
    }
    printf("%d\n", sum);
    return 0;
}