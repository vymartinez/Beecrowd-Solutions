#include <stdio.h>
#include <string.h>

char pass[40];
    int len, valid = 1;
    int conditions[4] = {0, 0, 0}; //maiuscula, minuscula e numero, respectivamente

char getString() {
    char c;
    int i = 0;
    while ((c = getchar()) != '\n' && c != EOF) {
        pass[i] = c;
        i++;
    }
    pass[i] = '\0';
    return c;
}

void validatePassword() {
    len = strlen(pass);
    if (len > 32 || len < 6) {
        valid = 0;
    }
    for (int i = 0; i < len; i++) {
        if ((pass[i] < 91) && (pass[i] > 64)) {
            conditions[0] = 1;
        } else if ((pass[i] > 96) && (pass[i] < 123)) {
            conditions[1] = 1;
        } else if (((pass[i] - '0') < 10) && ((pass[i] - '0') >= 0)) {
            conditions[2] = 1;
        } else {
            valid = 0;
        }
    }
    for (int i = 0; i < 3; i++) {
        if (conditions[i] == 0) {
            valid = 0;
        }
        conditions[i] = 0;
    }
    if (valid == 1) {
        printf("Senha valida.\n");
    } else {
        printf("Senha invalida.\n");
    }
    valid = 1;
}
 
int main() {
    while(getString() != EOF) {
        validatePassword();
    }
    validatePassword();
    return 0;
}