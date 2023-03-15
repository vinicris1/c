/*#include <stdio.h>

int main (int argc, char *argv[])
{
//gcc -o myprog myprog.c // int argc = number of arguments passed to the program // char *argv[] = one dimensional array of string, each string is one argument
//      argc
//        4
//      argv[0]
//        gcc
//      argv[1]
//        -o
//      argv[2]
//        myprog
//      argv[3]
//        myprog.c

  return 0;
}
*/
#include <stdio.h>

int main (int argc, char *argv[])
{
  int count;

  printf ("This program was called with \"%s\".\n",argv[0]);

  if (argc > 1)
    {
      for (count = 1; count < argc; count++)
	{
	  printf("argv[%d] = %s\n", count, argv[count]);
	}
    }
  else
    {
      printf("The command had no other arguments.\n");
    }

  return 0;
}
