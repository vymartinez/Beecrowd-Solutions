#include <stdio.h>
 
int main() {
    int n1, n2, c;
    c = 1;
    while (c == 1) {
        scanf("%d %d", &n1, &n2);
        if (n1 == n2) {
            c++;
            return 0;
        }else if (n1 > n2) {
            printf("Decrescente\n");
        } else {
            printf("Crescente\n");
        }
    }
    return 0;
}