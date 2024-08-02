#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int n;
    long int y;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%ld", &y);
        if (2015 - y > 0) {
            printf("%ld D.C.\n", 2015-y);
        } else {
            printf("%ld A.C.\n", labs(2015-y) + 1);
        }
    }
    return 0;
}