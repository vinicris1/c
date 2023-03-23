#include <stdio.h>
#include <stdlib.h>


int main(){
    int myAge = 43;  // An int variable
    int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

  // Output the value of myAge (43)
  printf("%d\n", myAge);

  // Output the memory address of myAge (0x7ffe5367e044)
  printf("%p\n", &myAge);

  // Output the memory address of myAge with the pointer (0x7ffe5367e044)
  printf("%p\n", ptr);

// Dereference: Output the value of myAge with the pointer (43)
   printf("%d\n", *ptr);

char *my_string;
my_string = (char *) malloc(10+1); //alloc 10 bytes because the 11 byte is a null point to terminate the string
my_string = (char *) realloc (my_string, 1001); // realloc to 1000bytes, last one is same them other
free (my_string); // free memory alloc
my_string = (char *)malloc(sizeof(myAge));//alloc to my_string the size of myAge
int mytest = sizeof(myAge);
free(my_string);
printf("\n%d\n", mytest);

}
