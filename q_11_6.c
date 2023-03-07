#include <stdio.h>

#define SIZE 5

// 6. Rewrite the nested loops example to print a square with while loops instead of for loops.

int main()
{
  int square_y = 1;

  while(square_y <= SIZE){

    printf("\n");
    int square_x = 1;

    while(square_x <= SIZE){

        printf("*");
        square_x++;

    }
        square_y++;
}
    printf ("\n");
  return 0;
}
