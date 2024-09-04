#include <stdio.h>
#include <string.h>
 
int main() {
    char substr[15];
    int cases = 1;
    while (scanf("%s", substr) != EOF) {
        char str[40];
        int count, pos, auxpos;
        count = pos = auxpos = 0;
        scanf("%s", str);
        int len = strlen(substr);
        while (str[0] != '\0') {
            if(strncmp(str, substr, len) == 0) {
                count++;
                pos += len + auxpos;
                auxpos = 0;
                strcpy(str, str+len);
            } else {
                auxpos++;
                strcpy(str, str+1);
            }
        }
        pos -= len-1;
        if (count == 0) {
            printf("Caso #%d:\n", cases);
            printf("Nao existe subsequencia\n\n");
        } else {
            printf("Caso #%d:\n", cases);
            printf("Qtd.Subsequencias: %d\n", count);
            printf("Pos: %d\n", pos);
            printf("\n");
        }
        cases++;
    }
    return 0;
}