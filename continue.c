#include <stdio.h>

int main(){
    int my_int;
    for (my_int = -10; my_int <= 10; my_int++)
{
  if (my_int == 0) //jump 0
  {
    continue;
  }

  printf ("%d", my_int);
}

}
