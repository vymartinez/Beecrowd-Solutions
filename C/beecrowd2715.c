        #include <stdio.h>
        #include <math.h>

        long long int module(long long int x) {
            if(x < 0)
                return -x;
            return x;
        }

        int main() {
            long long int n, dif, resp, sum, total, lasts;
            while(scanf("%lld", &n) != EOF) {
                sum = total = 0;
                long long int num[n];
                for (int i = 0; i < n; i++) {
                    scanf("%lld", &num[i]);
                    total += num[i];
                }
                for (int i = 0; i < n; i++) {
                    if (i == 0) {
                        sum = total - num[n-1];
                        lasts = total - sum;
                        resp = module(lasts - sum);
                    } else {
                        sum -= num[n-i-1];
                        lasts += num[n-i-1];
                        dif = module(lasts - sum);
                        if (dif < resp) {
                            resp = dif;
                        }
                    }
                }
                printf("%lld\n", resp);
            }
            return 0;
        }