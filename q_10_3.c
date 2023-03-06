#include <stdlib.h>
#include <stdio.h>
#include <string.h>



void main(){
    char login[4];
    float pin;

    char lanswer[] = "vini";
    float panswer = 1234;

    int result;
    int pin_result;

    printf("Login:");
    scanf ("%s", &login);

    result = strcmp(login, lanswer); //take login and lanswer if it is 0 is =
    //pin_result = strcmp(pin, panswer);

    if(result == 0){
        printf("\nWelcome, %s \n\n", login);
        printf("Pleas digit your PIN\n");
        printf("PIN:");
        scanf ("%f", &pin);
            if(pin == 1234){
                printf("\nYour balance is: U$ 1000\n");
            }else{
                printf("Incorrect password");
            }
    }else{
        printf("Your username does not exist");
    }



}
