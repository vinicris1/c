#include <stdlib.h>
#include <stdio.h>

int add(float a, float b){
    return a + b;
}

int decrease(float a, float b){
    return a - b;
}

int divide(float a, float b){
    return a / b;
}

int multiply(float a, float b){
    return a * b;
}

int main(){

    int signal;
    float a, b;
    float result;

    printf("Write ur first number:");
    scanf("%f", &a);

    printf("Write ur second number:");
    scanf("%f", &b);

    printf("Write 1 to add\n");
    printf("Write 2 to decrease\n");
    printf("Write 3 to divide\n");
    printf("Write 4 to multiply\n");
    scanf("%d", &signal);

    switch(signal){
        case 1:
        result = add(a,b);
        printf("Your result: %.2f", result);
        break;
        case 2:
        result = decrease(a,b);
        printf("Your result: %.2f", result);
        break;
        case 3:
        result = divide(a,b);
        printf("Your result: %.2f", result);
        break;
        case 4:
        result = multiply(a,b);
        printf("Your result: %.2f", result);
        break;
    }

}