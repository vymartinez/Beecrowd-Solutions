#include <stdio.h>
 
int main() {
    int age, ages[3];
    scanf("%d %d %d", &age, &ages[0], &ages[1]);
    ages[2] = age - ages[0] - ages[1];
    for (int i = 0; i < 3; i++) {
        for (int j = i+1; j < 3; j++) {
            if (ages[j] > ages[i]) {
                int tmp = ages[i];
                ages[i] = ages[j];
                ages[j] = tmp;
            }
        }
    }
    printf("%d\n", ages[0]);
    return 0;
}