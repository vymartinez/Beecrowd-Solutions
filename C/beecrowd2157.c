#include <stdio.h>
#include <string.h>
 
int main() {
    int n, n1, n2;
    char num[10];
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &n1, &n2);
        for (int i = n1; i <= n2; i++) {
            printf("%d", i);
        }
        for (int i = n2; i >= n1; i--) {
            sprintf(num, "%d", i);
            for (int j = strlen(num)-1; j >= 0; j--) {
                printf("%c", num[j]);
            }
        }
        printf("\n");
    }
    return 0;
}