#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
    if (n == 0) {
        printf("E");
    } else if (n > 0 && n < 36) {
        printf("D");
    } else if (n > 35 && n < 61) {
        printf("C");
    } else if (n > 60 && n < 86) {
        printf("B");
    } else {
        printf("A");
    }
    printf("\n");
    return 0;
}