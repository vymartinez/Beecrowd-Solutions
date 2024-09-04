#include <stdio.h>
#include <string.h>

typedef struct food {
    char name[20];
    int mg;
} food;

food foods[7] = {{"suco de laranja", 120}, {"morango fresco", 85}, {"mamao", 85}, {"goiaba vermelha", 70}, {"manga", 56}, {"laranja", 50}, {"brocolis", 34}};
 
int main() {
    int n;
    scanf("%d", &n);
    while (n != 0) {
        char name[20];
        int total, qtd;
        total = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d ", &qtd);
            gets(name);
            for (int j = 0; j < 7; j++) {
                if (strcmp(name, foods[j].name) == 0) {
                    total += (qtd * foods[j].mg);
                    break;
                }
            }
        }
        if (total < 110) {
            printf("Mais %d mg\n", (110 - total));
        } else if (total > 130) {
            printf("Menos %d mg\n", (total - 130));
        } else {
            printf("%d mg\n", total);
        }
        scanf("%d", &n);
    }
    return 0;
}