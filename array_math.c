#include <stdio.h>

void multiply (int[], int); //can also be used "int*" between "int[]" but its very confusing


int main()
{
  int index;
  int my_array[5] = {0, 1, 2, 3, 4};

  multiply (my_array, 2);

  for (index = 0; index < 5; index++)
    printf("%d  ", my_array[index]);

  printf("\n\n");
  return 0;
}

void multiply (int the_array[], int multiplier)
{
  int index;
  for (index = 0; index < 5; index++)
    the_array[index] *= multiplier;
}
