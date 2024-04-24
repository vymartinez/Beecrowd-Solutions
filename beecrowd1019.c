#include <stdio.h>
 
int main() {
    int h, m, s, r1, r2, t;
    scanf("%d", &t);
    h = t/3600;
    r1 = t%3600;
    m = r1/60;
    s = r1%60;
    printf("%d:%d:%d\n", h, m, s);
    return 0;
}