#include <stdio.h>
 
int main() {
    int n, t;
    scanf("%d", &n);
    t = 0;
    for (int i = 0; i < 1000; i++) {
        printf("N[%d] = %d\n", i, t);
        if (t == n-1) {
            t = 0;
        } else {
            t++;
        }
    }
    return 0;
}