#include <stdio.h>
#include <math.h>
 
int main() {
    int n, num;
    scanf("%d", &n);
    while (n--) {
        long long int sum = 0;
        scanf("%d", &num);
        for (int i = 0; i < num; i++) {
            sum += pow(2, i);
        }
        printf("%lld\n", sum);
    }
    return 0;
}