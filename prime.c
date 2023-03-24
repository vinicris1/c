#include <stdlib.h>
#include <stdio.h>

int main(){
    int num;
    int calc;
    int flag;

    printf("Enter ur number:");
    scanf("%d", &num);

    /*int teste = 10;
    printf("\n%d\n", teste%3);*/

    calc = num / 2;

    for(int i = 2; i <= calc; i++){ //will stay in loop until the number will be dividided by its half, if never rest 0 is a prime.
        if(num % i == 0){ //% is what rest after a division like: 10/3 = 1
            printf("number is not prime\n");
            flag = 1;
            break;
        }
    }
    if(flag == 0 && num != 1){
        printf("prime");
        return 0;
    }
}
