#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int number[10];
    int quant;
    int sum;
    float average;

    printf("How many numbers do you want to average(max 10)?:");
    scanf("%d", &quant);
    
    

    for(int i = 1; i <= quant; i++){
        printf("Write your %d number:", i);
        scanf("%d", &number[i]);
    }

    for(int z = 1; z <= quant; z++){
        sum = sum + number[z];
    }
     
    average = sum / quant;
    printf("The average between your numbers is: %.2f", average);
}