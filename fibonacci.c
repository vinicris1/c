#include <stdlib.h>
#include <stdio.h>

int main(){
    int first_num, second_num, third_num, sum;
    first_num = 0; //3
    second_num = 1; // 5
    third_num = 2; // 8

        printf("%d\n", first_num);
        printf("%d\n", second_num);
        printf("%d\n", third_num);

        first_num = second_num + third_num;
        printf("%d\n", first_num);
    for(int i = 0; i < 10; i++){
        second_num = first_num + third_num;
        printf("%d\n", second_num);
        third_num = first_num + second_num;
        printf("%d\n", third_num);
        first_num = second_num + third_num;
        printf("%d\n", first_num);
    }

}
