#include <stdio.h>
 
int main() {
    int n, count, i;
    long long int survived;
    count = survived = i = 0;
    scanf("%d", &n);
    long int val[n], initialVal[n], num;
    for (int j = 0; j < n; j++) {
        scanf("%ld", &num);
        initialVal[j] = val[j] = num;
    }
    while (i >= 0 && i < n) {
        if (initialVal[i] == val[i]) {
            count++;
        }
        if(val[i] > 0) {
            val[i]--;
            if ((val[i] + 1) % 2 == 0) {
                i--;
            } else {
                i++;
            }
        } else {
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        survived += val[i];
    }
    printf("%d %lld\n", count, survived);
    return 0;
}