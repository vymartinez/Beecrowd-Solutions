#include <stdio.h>
 
int main() {
    int nums[7] = {1000, 500, 100, 50, 10, 5, 1};
    char letters[7][1] = {"M", "D", "C", "L", "X", "V", "I"};
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 1; i++) {
        if (n > nums[i]) {
            n -= nums[i];
            printf("M");
            i--;
        }
    }
    for (int i = 1; i < 7; i++) {
        if (n >= nums[i] && n < nums[i-1] - nums[i]) {
            n -= nums[i];
            printf("%c", letters[i][0]);
            i--;
        } else if (n >= nums[i] && n >= nums[i-1] - nums[i]) {
            if (n >= nums[i-1] - nums[i+1] && i != 6 && i != 4 && i != 2) {
                printf("%c%c", letters[i+1][0], letters[i-1][0]);
                n -= nums[i-1] - nums[i+1];
                i--;
            } else if (i != 1 && i != 3 && i != 5) {
                printf("%c%c", letters[i][0], letters[i-1][0]);
                n -= nums[i-1] - nums[i];
                i--;
            } else {
                n -= nums[i];
                printf("%c", letters[i][0]);
                i--;
            }
        }
    }
    printf("\n");
    return 0;
}