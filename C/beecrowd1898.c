#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
 
int main() {
    char seq1[61], seq2[61], cpf[12], num1[18], num2[18];
    int count, countnum, dot;
    count = countnum = dot = 0;
    scanf("%s %s", seq1, seq2);
    int len = strlen(seq1);
    for (int i = 0; i < len; i++) {
        if (isdigit(seq1[i]) && count < 11) {
            cpf[count] = seq1[i];
            count++;
        } else if ((isdigit(seq1[i]) || seq1[i] == '.') && (countnum != dot || dot == 0)) {
            num1[countnum] = seq1[i];
            countnum++;
            if (seq1[i] == '.') {
                dot = countnum+2;
            }
        } else if (dot == countnum && dot != 0) {
            break;
        }
    }
    dot = countnum = 0;
    len = strlen(seq2);
    for (int i = 0; i < len; i++) {
        if ((isdigit(seq2[i]) || seq2[i] == '.') && (countnum != dot || dot == 0)) {
            num2[countnum] = seq2[i];
            countnum++;
            if (seq2[i] == '.') {
                dot = countnum+2;
            }
        } else if (dot == countnum && dot != 0) {
            break;
        }
    }
    double n1, n2;
    n1 = atof(num1);
    n2 = atof(num2);
    printf("cpf ");
    for (int i = 0; i < 11; i++) {
        printf("%c", cpf[i]);
    }
    printf("\n");
    printf("%.2lf\n", n1 + n2);
    return 0;
}