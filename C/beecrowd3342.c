#include <stdio.h>
 
int main() {
    int n, whites, blacks;
    whites = blacks = 0;
    scanf("%d", &n);
    if (n % 2 != 0) {
        whites += (n/2 + 1) * (n/2+1);
        blacks += (n/2) * (n/2+1);
        whites += (n/2) * (n/2);
        blacks += (n/2 + 1) * (n/2);
    } else {
        whites = n * n/2;
        blacks = n * n/2;
    }
    printf("%d casas brancas e %d casas pretas\n", whites, blacks);
    
    return 0;
}