#include <stdio.h>
 
int main() {
    int cv, fv, ce, fe, cs, fs;
    scanf("%d %d %d %d %d %d", &cv, &ce, &cs, &fv, &fe, &fs);
    cv *= 3;
    fv *= 3;
    if (cv + ce > fv + fe) {
        printf("C\n");
    } else if (cv + ce == fv + fe) {
        if (cs > fs) {
            printf("C\n");
        }else if (fs > cs){
            printf("F\n");
        } else {
            printf("=\n");
        }
    }else {
        printf("F\n");
    }
    return 0;
}