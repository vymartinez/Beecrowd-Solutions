#include <stdio.h>
#include <string.h>
 
int main() {
    int len;
    char n[11];
    scanf("%s", n);
    len = strlen(n);
    for (int i = len-1; i >= 0; i--) {
        printf("%c", n[i]);
    }
    printf("\n");
    return 0;
}