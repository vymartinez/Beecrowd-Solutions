#include <stdio.h>
#include <stdlib.h>

#define MAX 110

int compare(const void *a, const void *b) {
    return *(int *)b - *(int *)a;
}
 
int main() {
    int n1, n2, n;
    int notes[MAX];
    while(scanf("%d %d", &n1, &n2) != EOF) {
        for (int i = 0; i < n1; i++) {
            scanf("%d", &notes[i]);
        }
        qsort(notes, n1, sizeof(int), compare);
        while (n2--) {
            scanf("%d", &n);
            printf("%d\n", notes[n-1]);
        }
    }
    return 0;
}