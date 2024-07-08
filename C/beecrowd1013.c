#include <stdio.h>
 
int main() {
    int mAB, mf, a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    mAB = (a+b+abs(a-b))/2;
    mf = (mAB+c+abs(mAB-c))/2;
    printf("%d eh o maior\n", mf);
    return 0;
}