#include <stdio.h>
 
int main() {
    int n, num, menor, pos;
    scanf("%d", &n);
    int val[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        val[i] = num;
        if ( i == 0) {
            menor = num;
        } else {
            if ( menor > num) {
                menor = num;
                pos = i;
            }
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos);
    return 0;
}