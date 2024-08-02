#include <stdio.h>
 
int main() {
    int n, product, times;
    float list[5] = {1.50, 2.50, 3.50, 4.50, 5.50};
    double total = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &product, &times);
        total += list[product-1001] * times;
    }
    printf("%.2lf\n", total);
    return 0;
}