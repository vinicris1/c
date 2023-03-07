#include <stdio.h>

int main()
{
  /*int up, down;

  for (up = 0, down=10; up < down; up++, down--)
  {
    printf("up = %d, down= %d\n",up,down);
  }

  return 0;*/

  int index, number = 20;

    for (index = 0; index <= number; index++)
    {
        printf("%d\n", index);
        printf("%d\n", number);
        if (index == 9)
    {
        number = 30;
    }
    }
}

