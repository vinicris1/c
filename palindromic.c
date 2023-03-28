#include <stdlib.h>
#include <stdio.h>

int main(){
    int num, calc = 0, temp, res;
    printf("Enter the number=");
    scanf("%d", &num);
    temp = num;

    while(num>0){
        res=num%10; //if the num is 11 res=1 //res = 1 // res = 1 *second
        calc =(calc*10)+res; // calc = 1 // calc == 11 *second
        num = num/10; // num = 1.1 // num = 0.11 *second
    }
    if(temp == calc){
        printf("palindrome number");
    }else{
        printf("not palindrome");
        return 0;
    }
}
