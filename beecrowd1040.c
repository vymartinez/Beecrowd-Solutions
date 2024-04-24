#include <stdio.h>
 
int main() {
    double n1, n2, n3, n4, m, e, m2;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    m = ((2*n1) + (3*n2) + (4*n3) + n4)/10;
    printf("Media: %.1lf\n", m);
    if (m >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if ((m < 7) && (m >= 5)) {
        printf("Aluno em exame.\n");
        scanf("%lf", &e);
        printf("Nota do exame: %.1lf\n", e);
        m2 = (m + e)/2;
        if (m2 >= 5) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", m2);
    } else {
        printf("Aluno reprovado.\n");
    }
    return 0;
}