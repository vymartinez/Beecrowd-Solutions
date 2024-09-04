#include <stdio.h>
 
int main() {
    int n, num, last, resp;
    resp = last = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &num);
        if (num < last) {
            resp = i;
            break;
        } else {
            last = num;
        }
    }
    printf("%d\n", resp);
    return 0;
}