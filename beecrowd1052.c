#include <stdio.h>

int main(){
    int mes;
    scanf("%d", &mes);
    mes -= 1;
    switch (mes){
        case 0:
            printf("January\n");
        break;
 
        case 1:
            printf("February\n");
        break;
 
        case 2:
            printf("March\n");
        break;
 
        case 3:
            printf("April\n");
        break;
 
        case 4:
            printf("May\n");
        break;
 
        case 5:
            printf("June\n");
        break;
 
        case 6:
            printf("July\n");
        break;
        case 7:
            printf("August\n");
        break;
 
        case 8:
            printf("September\n");
        break;
 
        case 9:
            printf("October\n");
        break;
 
        case 10:
            printf("November\n");
        break;
        case 11:
            printf("December\n");
        break;
    }
    
    return 0;
}