#include <stdio.h>
 
int main() {
    int n, i;
    i = 1;
    scanf("%d", &n);
    for (int j = 0; j < n; j++) {
        printf("%d %d %d PUM\n", i, i+1, i+2);
        i += 4;
    }
    return 0;
}