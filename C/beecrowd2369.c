#include <stdio.h>
 
int main() {
    int n, resp;
    scanf("%d", &n);
    if (n <= 10) {
        resp = 7;
    } else if ((n > 10) && (n <= 30)) {
        n -= 10;
        resp = 7 + n;
    } else if ((n > 30) && (n <= 100)) {
        n -= 30;
        resp = 7 + 20 + (n*2);
    } else {
        n -= 100;
        resp = 7 + 20 + 140 + (n*5);
    }
    printf("%d\n", resp);
    return 0;
}