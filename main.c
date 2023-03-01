#include <stdlib.h>

void print_value();

int main(){
    extern int myvar;
    myvar = 500;
    print_value();
    exit(0);
}
