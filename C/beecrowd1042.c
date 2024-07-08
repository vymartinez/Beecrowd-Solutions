#include <stdio.h>
 
int main() {
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    int valores[3] = {n1, n2, n3};
    int normal[3] = {n1, n2, n3};
    for (int i = 0; i < 3; i++) {
        for (int j = i+1; j < 3; j++) {
            if (valores[j] > valores[i]) {
                int tmp = valores[i];
                valores[i] = valores[j];
                valores[j] = tmp;
            }
        }
    }
    for (int i = 2; i >=0; i--) {
        printf("%d\n", valores[i]);
    }
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf("%d\n", normal[i]);
    }
    
    return 0;
}