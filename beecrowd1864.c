#include <stdio.h>
 
int main() {
    //LIFE IS NOT A PROBLEM TO BE SOLVED
    int n;
    scanf("%d", &n);
    char msg[34] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    for (int i = 0; i < n; i++) {
        printf("%c", msg[i]);
    }
    printf("\n");
    return 0;
}