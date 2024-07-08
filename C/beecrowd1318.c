    #include <stdio.h>
    
    int main() {
        int n, m, num, last, notNew, total;
        do {
            last = notNew = total = 0;
            scanf("%d %d", &n, &m);
            if (n == 0 && m == 0) {
                return 0;
            }
            int val[n], count[n];
            for (int i = 0; i < m; i++) {
                scanf("%d", &num);
                for (int j = 0; j < last; j++) {
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
                if (count[i] > 1) {
                    total++;
                }
            }
            printf("%d\n", total);
        } while ((n != 0) && (m != 0));
        return 0;
    }