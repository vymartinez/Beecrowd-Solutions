#include <stdio.h>
 
int main() {
    int n, num;
    scanf("%d", &n);
    for (int i = 0; i< n; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            printf("0\n");
        } else {
            printf("1\n");
        }
    }
    return 0;
}