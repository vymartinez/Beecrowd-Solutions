#include <stdio.h>
 
int main() {
    char msg[27];
    int n, pos;
    while (scanf("%s", msg) != EOF) {
        scanf("%d", &n);
        while (n--) {
            scanf("%d", &pos);
            printf("%c", msg[pos-1]);
        }
        printf("\n");
    }
    return 0;
}