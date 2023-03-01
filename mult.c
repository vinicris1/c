#include <stdio.h>
#include <stdlib.h>

int calc_value(int a, int b);

int main(){
  int c = calc_value(2, 3);
    printf("calc_value = %d \n", c);

    float exact_length;
    int rough_length;

    rough_length = 12;
    exact_length = (float)rough_length;
    printf("exact_length=%f\n", exact_length);

    int exact;
    float rough;

    rough = 23.1256;
    exact = (int)rough;
    printf("exact=%d\n",exact);

    exit(0);
}

int calc_value(int a, int b){
    return a * b;
}
