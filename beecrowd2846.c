#include <stdio.h>

int main() {
    int n, count, emg, resp, k, i;
    count = k = 0;
    i = 2;
    scanf("%d", &n);
    int fb[100000] = {1, 1};
    while (k == 0) {
        fb[i] = fb[i-1] + fb[i-2];
        count += fb[i] - fb[i-1] - 1;
        if (count >= n) {
            resp = fb[i-1];
            while (emg != n) {
                emg++;
                resp++;
            }
            k++;
        } else {
            emg = count;
            i++;
        }
    }
    printf("%d\n", resp);
    return 0;
}