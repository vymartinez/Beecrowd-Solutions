#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main() {
    int n, count, hard;
    char name[50];
    scanf("%d", &n);
    while (n--) {
        hard = count = 0;
        scanf("%s", name);
        int len = strlen(name);
        for (int i = 0; i < len; i++) {
            if (toupper(name[i]) == 'A' || toupper(name[i]) == 'E' ||
            toupper(name[i]) == 'I' || toupper(name[i]) == 'O' || toupper(name[i]) == 'U') {
                count = 0;
            } else {
                count++;
            }
            if (count == 3) {
                hard = 1;
                break;
            }
        }
        if (hard) {
            printf("%s nao eh facil\n", name);
        } else {
            printf("%s eh facil\n", name);
        }
    }
    return 0;
}