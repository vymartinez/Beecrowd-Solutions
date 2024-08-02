#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    int super, primo, len;
    char n[7];
    while (scanf("%s", n) != EOF) {
        super = primo = 0;
        int num = atoi(n);
        len = strlen(n);
        primo = ehPrimo(num);
        if (primo == 1) {
            for (int i = 0; i < len; i++) {
                super = ehPrimo((n[i] - '0'));
                if (super == 0) {
                    printf("Primo\n");
                    break;
                }
            }
            if (super == 1) {
                printf("Super\n");
            }
        } else {
            printf("Nada\n");
        }
    }
    
    return 0;
}