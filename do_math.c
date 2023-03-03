#include <stdio.h>

int add (int, int);
int subtract (int, int);
int mult (int, int);
int do_math (int (*math_fn_ptr) (int, int), int, int);
int main();

int main()
{
  int result;

  result = do_math (add, 10, 5); //(func,int,int)
  printf ("Addition = %d.\n", result);

  result = do_math (subtract, 40, 5);//(func,int,int)
  printf ("Subtraction = %d.\n\n", result);

  result = do_math (mult, 4, 5);//(func,int,int)
  printf ("Mult = %d.\n\n", result);

  return 0;
}

int mult (int num1, int num2){
    return(num1 * num2);
}

int add (int num1, int num2)
{
  return (num1 + num2);
}


int subtract (int num1, int num2)
{
  return (num1 - num2);
}


int do_math (int (*math_fn_ptr) (int, int), int num1, int num2)
{
  int result;

  printf ("\ndo_math here.\n");

  /* Call one of the math functions passed to us:
     either add or subtract. */

  result = (*math_fn_ptr) (num1, num2);
  return result;
}
