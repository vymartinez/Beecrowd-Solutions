#include <stdio.h>

int verifyT(int n1, int n2, int n3) {
   if ((n1 >= n2 + n3) || (n2 >= n1 + n3) || (n3 >= n1 + n2)) {
       return 0;
   } else {
       return 1;
   }
}
 
int main() {
    int val[6], num, res;
    for (int i = 0; i < 4; i++) {
        scanf("%d", &num);
        if (i == 0) {
            val[4] = num;
        } else if (i == 1) {
            val[5] = num;
        }
        val[i] = num;
    }
    for (int i = 0; i < 4; i++) {
        res = verifyT(val[i], val[i+1], val[i+2]);
        if (res == 1) {
            printf("S\n");
            return 0;
        }
    }
    printf("N\n");
    return 0;
}