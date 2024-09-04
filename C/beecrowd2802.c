#include <stdio.h>
#include <math.h>
 
int main() {
    long long int n;
    scanf("%lld", &n);
    long long int resp = (n*(n-1)*(n-2)*(n-3))/24 + (n*(n-1))/2 + 1;
    printf("%lld\n", resp);
    return 0;
}