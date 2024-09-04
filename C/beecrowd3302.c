#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int resp;
        scanf("%d", &resp);
        printf("resposta %d: %d\n", i, resp);
    }
    return 0;
}