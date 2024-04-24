#include <stdio.h>
 
int main() {
    int i, k, c;
    float med;
    med = k = c = 0;
    while (k == 0) {
        scanf("%d", &i);
        if (i >= 0) {
            med += i;
            c++;
        } else {
            k++;
            break;
        }
    }
    printf("%.2f\n", med/c);
    return 0;
}