#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main() {
    int n, total, uns, zeros, len;
    scanf("%d", &n);
    while(n != 0) {
        total = uns = zeros = 0;
        char num[1001];
        char zero[1001];
        char one[1001];
        for (int i = 0; i < n; i++) {
            scanf("%s", num);
            len = strlen(num);
            for (int j = 0; j < len; j++) {
                if (j % 2 == 0) {
                    uns += (num[j] - '0');
                } else {
                    zeros += (num[j] - '0');
                }
            }
            if (uns > 10) {
                sprintf(one, "%d", uns);
                len = strlen(one);
                for (int k = 0; k < len; k++) {
                    total += (one[k] - '0');
                }
            } else {
                total += uns;
            }
            if (zeros > 10) {
                sprintf(zero, "%d", zeros);
                len = strlen(zero);
                for (int k = 0; k < len; k++) {
                    total += (zero[k] - '0');
                }
            } else {
                total += zeros;
            }
            printf("%d\n", total);
            total = uns = zeros = 0;
        }
        scanf("%d", &n);
    }
    return 0;
}