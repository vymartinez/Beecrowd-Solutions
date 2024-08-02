#include <stdio.h>
#include <math.h>

int ehPrimo(int n) {
    if(n < 2 || (n != 2 && n % 2 == 0)) {
        return 0;
    } else {
        int sqrt_n = sqrt(n);
        for(int i = 3; i <= sqrt_n; i+=2) {
            if(n % i == 0){
                return 0;
            }
        }
    }
    return 1;
}
 
int main() {
    int n, jump, victory, sum;
    while (scanf("%d", &n) != EOF) {
        sum = victory = 0;
        int coins[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &coins[i]);
        }
        scanf("%d", &jump);
        for (int i = n-1; i >= 0; i -= jump) {
            sum += coins[i];
        }
        victory = ehPrimo(sum);
        if (victory == 0) {
            printf("Bad boy! I’ll hit you.\n");
        } else {
            printf("You’re a coastal aircraft, Robbie, a large silver aircraft.\n");
        }
    }
    return 0;
}