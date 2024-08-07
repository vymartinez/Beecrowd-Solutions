#include <stdio.h>
#include <stdlib.h>

int t, n, k;

typedef struct {
    long long int id;
    int size;
} gifts;

int compare1(gifts* a, gifts* b) {
    if (a->size == b->size) {
		if (a->id > b->id) {
			return 1;
        } else {
			return -1;
        }
	} else if (a->size > b->size) {
        return -1;
    } else {
        return 1;
    }
}
int compare2(long long int *a, long long int *b) {
    if (*a > *b) {
        return 1;
    } else {
		return -1;
    }
}
 
int main() {
    int h, w, l;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &n, &k);
        long long int ids[n];
        gifts gift[n];
        for (int j = 0; j < n; j++) {
            scanf("%lld %d %d %d", &gift[j].id, &h, &w, &l);
            gift[j].size = h * w * l;
        }
        qsort(gift, n, sizeof(gifts), compare1);
        for (int j = 0; j < k; j++) {
            ids[j] = gift[j].id;
        }
        qsort(ids, k, sizeof(long long int), compare2);
        for (int j = 0; j < k; j++) {
            if (j != k-1) {
                printf("%lld ", ids[j]);
            } else {
                printf("%lld\n", ids[j]);
            }
        }
    }
    return 0;
}