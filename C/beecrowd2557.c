#include <stdio.h>
#include <stdlib.h>

char nums[3][10];
int invalid;
int count = 0;

char getNums() {
    char c;
    int i = 0;
     while ((c = getchar()) != '+' && c != '=' && c != '\n' && c != EOF) {
        nums[count][i] = c;
        i++;
        if (c == 'J' || c == 'L' || c == 'R') {
            invalid = count;
        }
    }
    nums[count][i] = '\0';
    count++;
    return c;
}
 
int main() {
    int resp;
    while (getNums() != EOF) {
        getNums();
        getNums();
        if (invalid == 0) {
            resp = (atoi(nums[2]) - atoi(nums[1]));
        } else if (invalid == 1) {
            resp = (atoi(nums[2]) - atoi(nums[0]));
        } else {
            resp = (atoi(nums[0]) + atoi(nums[1]));
        }
        printf("%d\n", resp);
        count = 0;
    }
    return 0;
}