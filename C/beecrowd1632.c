#include <stdio.h>
#include <ctype.h>
#include <string.h>
 
int main() {
    int n, resp;
    char password[20];
    scanf("%d", &n);
    while (n--) {
        resp = 1;
        scanf("%s", password);
        int len = strlen(password);
        for (int i = 0; i < len; i++) {
            if (toupper(password[i]) == 'A' || toupper(password[i]) == 'E' ||
            toupper(password[i]) == 'I' || toupper(password[i]) == 'O' || toupper(password[i]) == 'S') {
                resp *= 3;
            } else {
                resp *= 2;
            }
        }
        printf("%d\n", resp);
    }
    return 0;
}