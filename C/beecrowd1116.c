#include <stdio.h>
 
int main() {
    int n;
    float d, n1, n2;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%f %f", &n1, &n2);
        if (n2 == 0) {
            printf("divisao impossivel\n");
        } else {
            d = n1/n2;
            printf("%.1f\n", d);
        }
    }
    return 0;
}