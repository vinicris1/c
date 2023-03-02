#include <stdio.h>
#include <stdlib.h>

int main(){
    int numb = 0;
    while (numb < 10){
        if(numb==5){
            printf("--------------\n");
        }
        numb++;
        printf("%d\n", numb);
    }
}
