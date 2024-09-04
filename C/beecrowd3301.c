#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct boys {
    char name[20];
    int age;
} boys;

int compare(boys* a, boys* b) {
    if (a -> age < b -> age) {
        return 1;
    }
    return -1;
}
 
int main() {
    boys boy[3];
    scanf("%d %d %d", &boy[0].age, &boy[1].age, &boy[2].age);
    strcpy(boy[0].name, "huguinho");
    strcpy(boy[1].name, "zezinho");
    strcpy(boy[2].name, "luisinho");
    qsort(boy, 3, sizeof(boys), compare);
    printf("%s\n", boy[1].name);
    return 0;
}