#include <stdio.h>

#define CHOICE 500

int my_int = 0;

#if (CHOICE == 500)
void set_my_int()
{
  my_int = 23;
}
#else
void set_my_int()
{
  my_int = 17;
}
#endif

int main ()
{
  set_my_int();
  printf("%d\n", my_int);

  return 0;
}
