#include <stdio.h>
 
int main() {
    int n, num, menor, resp;
    menor = 20;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &num);
        if (menor > num) {
            menor = num;
            resp = i;
        }
    }
    printf("%d\n", resp);
    return 0;
}