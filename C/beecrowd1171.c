#include <stdio.h>
 
int main() {
    int n, num, notNew, last;
    last = notNew = 0;
    scanf("%d", &n);
    int val[n], count[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        for (int j = 0; j < i; j++) {
            if (val[j] == num) {
                count[j] += 1;
                notNew = 1;
                break;
            }
        }
        if (notNew == 0) {
            val[last] = num;
            count[last] = 1;
            last++;
        }
        notNew = 0;
    }
    for (int i = 0; i < last; i++) {
        for (int j = i + 1; j < last; j++) {
            if (val[i] > val[j]) {
                int temp = val[i];
                val[i] = val[j];
                val[j] = temp;
                temp = count[i];
                count[i] = count[j];
                count[j] = temp;
            }
        }
    }
    for (int i = 0; i < last; i++) {
        printf("%d aparece %d vez(es)\n", val[i], count[i]);
    }
    return 0;
}