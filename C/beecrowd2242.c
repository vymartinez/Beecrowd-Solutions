#include <stdio.h>
#include <ctype.h>
#include <string.h>
 
int main() {
    char laugh[55], opposite[55], vogals[55];
    int pos = 0, newLen = 0;
    scanf("%s", laugh);
    int len = strlen(laugh);
    for (int i = len-1; i >= 0; i--) {
        if (toupper(laugh[i]) == 'A' || toupper(laugh[i]) == 'E' || toupper(laugh[i]) == 'I' ||
        toupper(laugh[i]) == 'O' || toupper(laugh[i]) == 'U') {
            opposite[pos] = laugh[i];
            pos++;
            newLen++;
        }
    }
    pos = 0;
    for (int i = newLen-1; i >= 0; i--, pos++) {
        vogals[pos] = opposite[i];
    }
    vogals[newLen] = opposite[newLen] = '\0';
    if (strcmp(vogals, opposite) == 0) {
        printf("S\n");
    } else {
        printf("N\n");
    }
    return 0;
}