#include <stdio.h>
 
int main() {
    int n[20];
    int k;
    int j = 19;
    for (int i = 0; i < 20; i++) {
        scanf("%d", &k);
        n[i] = k;
    }
    for (int i = 0; i < 10; i++) {
        int tmp = n[i];
        n[i] = n[j];
        n[j] = tmp;
        j--;
    }
    
    for (int i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, n[i]);
    }
    return 0;
}