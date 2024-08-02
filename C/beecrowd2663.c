#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}
 
int main() {
    int n, vagas, count, resp, ultimaNota;
    count = 0;
    scanf("%d %d", &n, &vagas);
    resp = vagas;
    int notas[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &notas[i]);
    }
    qsort(notas, n, sizeof(int), compare);
    for (int i = n-1; i >= 0; i--) {
        if (count != vagas) {
            count++;
            ultimaNota = notas[i];
        } else {
            if (notas[i] != ultimaNota) {
                break;
            } else {
                resp++;
            }
        }
    }
    printf("%d\n", resp);
    return 0;
}