#include <stdio.h>
#include <string.h>
 
int main() {
    int n, resp;
    char plate[10];
    char ans[6][10] = {"MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "FAILURE"};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", plate);
        if (strlen(plate) != 8 || plate[3] != '-') {
            resp = 5;
        }
        for (int j = 0; j < 3; j++) {
            if (plate[j] < 65 || plate[j] > 90) {
                resp = 5;
            }
        }
        for (int j = 4; j < 8; j++) {
            if ((plate[j] - '0') > 9) {
                resp = 5;
            }
        }
        if (resp != 5) {
            switch(plate[7]) {
                case '1':
                case '2':
                    resp = 0;
                    break;
                case '3':
                case '4':
                    resp = 1;
                    break;
                case '5':
                case '6':
                    resp = 2;
                    break;
                case '7':
                case '8':
                    resp = 3;
                    break;
                case '9':
                case '0':
                    resp = 4;
                    break;
                default:
                    resp = 5;
                    break;
            }
        }
        printf("%s\n", ans[resp]);
        resp = 0;
    }
    return 0;
}