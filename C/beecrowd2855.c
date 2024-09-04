#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int n, number, pos, count, no = 0;
    while (scanf("%d", &n) != EOF) {
        no = 0;
        int nums[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &nums[i]);
        }
         scanf("%d", &number);
        for (int i = 0; i < n; i++) {
            if (number == nums[i]) {
                pos = i;
                break;
            }
        }
        int dif = 1;
        for (int i = 2; i-1 <= pos; i++) {
            count = 0;
            for (int j = 1; j*i-1 < n && j*i-1 <= pos; j++) {
                if (nums[i*j-1] == number) {
                    no = 1;
                    break;
                }
                count++;
            }
            pos -= count;
            nums[pos] = number;
            dif++;
        }
        if (no == 0) {
            printf("Y\n");
        } else {
            printf("N\n");
        }
    }
    return 0;
}