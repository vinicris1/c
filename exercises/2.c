#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    float currency;
    float percent;
    float result;

    printf("What is the price?:");
    scanf("%f", &currency);

    printf("How many %% off?:");
    scanf("%f", &percent);

    result = percent / 100;
    result = result * currency;

    result = currency - result;
    printf("The current price is: %.2f", result);
}