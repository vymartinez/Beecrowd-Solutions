#include <stdio.h>
 
int main() {
    int day, month, total;
    int days[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while (scanf("%d %d", &month, &day) != EOF) {
        total = day;
        month--;
        for (int i = 0; i < 12; i++) {
            if (i != month) {
                total += days[i];
            } else {
                break;
            }
        }
        int resp = 360 - total;
        if (resp == 0) {
            printf("E natal!\n");
        } else if (resp == 1) {
            printf("E vespera de natal!\n");
        } else if (resp < 0) {
            printf("Ja passou!\n");
        } else {
            printf("Faltam %d dias para o natal!\n", resp);
        }
    }
    return 0;
}