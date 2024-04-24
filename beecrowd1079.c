#include <stdio.h>
 
int main() {
    int n;
    float n1, n2, n3, med;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%f %f %f", &n1, &n2, &n3);
        med = (2*n1 + 3*n2 + 5*n3)/10;
        printf("%.1f\n", med);
    }
    return 0;
}