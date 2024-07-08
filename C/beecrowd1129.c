#include <stdio.h>
 
int main() {
    int n, item;
    char alt[5] = {'A', 'B', 'C', 'D', 'E'};
    char marked = ' ';
    do {
        scanf("%d", &n);
        for (int j = 0; j < n; j++) {
            for (int i = 0; i < 5; i++) {
                scanf("%d", &item);
                if (item <= 127) {
                    if (marked == ' ') {
                        marked = alt[i];
                    } else {
                        marked = '*';
                    }
                }
            }
            if (marked == ' ') {
                printf("*\n");
            } else {
                printf("%c\n", marked);
            }
            marked = ' ';
        }
    } while (n != 0);
    return 0;
}