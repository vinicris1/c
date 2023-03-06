#include <stdlib.h>
#include <stdio.h>

void main(){
    int km;
    int lit;

    int result;

    printf("How many kilometers did you drive?\n");
    printf("Kilometers: ");
    scanf("%d", &km);

    printf("How many liters of gas you have used?\n");
    printf("Liters: ");
    scanf("%d", &lit);

    result = km / lit;

    printf("Your car does %d kilometers per liter", result);
}
