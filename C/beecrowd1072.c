#include <stdio.h>
 
int main() {
    int n, n1, in, out;
    in = out = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &n1);
        if ((n1 >= 10) && (n1 <= 20)) {
            in ++;
        } else {
            out++;
        }
    }
    printf("%d in\n", in);
    printf("%d out\n", out);
    return 0;
}