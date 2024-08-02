#include <stdio.h>
 
int main() {
    int n, maior, count, id;
    scanf("%d", &n);
    for (int i = 1; n > 0; i++) {
        maior = count = 0;
        int ids[n], media;
        for (int j = 0; j < n; j++) {
            scanf("%d %d", &id, &media);
            if (media > maior) {
                maior = media;
                count = 1;
                ids[0] = id;
            } else if (media == maior) {
                count++;
                ids[count-1] = id;
            }
        }
        printf("Turma %d\n", i);
        for (int j = 0; j < count; j++) {
            if (j == count - 1) {
                printf("%d \n", ids[j]);
            } else {
                printf("%d ", ids[j]);
            }
        }
        printf("\n");
        scanf("%d", &n);
    }
    return 0;
}