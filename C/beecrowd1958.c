#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int len, first = 110, dot = 0, count = 3, done = 0;
    char n[111];
    char resp[12];
    scanf("%s", n);
    resp[2] = '.';
    resp[7] = 'E';
    if (n[0] == '-') {
        resp[0] = '-';
    } else {
        resp[0] = '+';
    }
    len = strlen(n);
    for (int i = 0; i < len; i++) {
        if ((n[i] - '0' > 0) && (n[i] - '0' < 10) && done == 0) {
            first = i;
            done = 1;
        } else if (n[i] == '.') {
            dot = i;
        }
    }
    if (first != 110) {
        resp[1] = n[first];
    } else {
        resp[1] = '0';
    }
    for (int i = first + 1; i < len; i++) {
        if (n[i] != '.') {
            resp[count] = n[i];
            count++;
            if (count == 7) {
                if (n[i+1] - '0' >= 5) {
                    resp[count - 1] = n[i]+1;
                }
                break;
            }
        }
    }
    for (int i = count; i < 7; i++) {
        resp[i] = '0';
    }
    for (int i = 0; i < 8; i++) {
        printf("%c", resp[i]);
    }
    if (dot == 0) {
        printf("+");
        if ((len - 1) >= 10 && resp[0] == '+') {
            printf("%d", len-1);
        } else if ((len - 1) >= 10 && resp[0] == '-') {
            printf("%d", len-2);
        } else if (resp[0] == '+') {
            printf("0%d", len-1);
        } else {
            printf("0%d", len-2);
        }
    } else {
        if ((n[0] - '0' == 0 && resp[0] == '+') || (resp[0] == '-' && n[1] - '0' == 0)) {
            printf("-");
            printf("0%d", first - dot);
        } else {
            printf("+");
            printf("00");
        }
    }
    printf("\n");
    return 0;
}