#include <stdio.h>
 
int main() {
    int pos = 0;
    float n, med;
    med = 0;
    for (int i = 0; i < 6; i++) {
        scanf("%f", &n);
        if (n > 0) {
            pos++;
            med += n;
        }
    }
    printf("%d valores positivos\n", pos);
    printf("%.1f\n", (med/pos));
    return 0;
}