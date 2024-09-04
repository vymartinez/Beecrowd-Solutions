#include <stdio.h>
 
int main() {
    int x;
    long long int xp;
    scanf("%d %lld", &x, &xp);
    while (x != 0 || xp != 0) {
        xp *= x;
        printf("%lld\n", xp);
        scanf("%d %lld", &x, &xp);
    }
    return 0;
}