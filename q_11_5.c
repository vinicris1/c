#include <stdio.h>


int main(){

    int input_number[9];
    int size = 9;
    int sum = 0;

    for(int i = 0; i <= size; i++){
        printf("write the %d number: ", i + 1);
        scanf("%d", &input_number[i]);
    }
    for(int i = 0; i <= size; i++){
        sum = sum + input_number[i];
    }
    printf("%d", sum);

}
