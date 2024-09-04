#include <stdio.h>

int biggest;

void getSequence(int num) {
    while (num != 1) {
        if (num % 2 == 0) {
            num = num/2;
        } else {
            num = (3 * num) + 1;
        }
        if (num > biggest) {
            biggest = num;
        }
    }
}
 
int main() {
    int n;
    scanf("%d", &n);
    while (n != 0) {
        biggest = n;
        getSequence(n);
        printf("%d\n", biggest);
        scanf("%d", &n);
    }
    return 0;
}