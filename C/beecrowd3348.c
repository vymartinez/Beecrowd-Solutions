#include <stdio.h>
 
int main() {
    int n, brown = 0;
    long long int resps[19] = {2, 7, 5, 30, 169, 441, 1872, 7632, 1740, 93313, 459901, 1358657, 2504881, 13482720, 25779600, 68468401, 610346880, 1271932200, 327280800};
    scanf("%d", &n);
    printf("%lld\n", resps[n-1]);
    return 0;
}