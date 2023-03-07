#include <stdio.h>

int main();
void get_substring();


int main()
{
  char ch;

  printf ("Enter a string with a quoted substring:\n\n");

  do
  {
    ch = getchar();
    if (ch == '"')
    {
      putchar(ch);
      get_substring();
    }
  }
  while (ch != '\n');

  return 0;
}


void get_substring()
{
  char ch;

  do
  {
    ch = getchar();
    putchar(ch);

    if (ch == '\n')
    {
      printf ("\nString was not closed ");
      printf ("before end of line.\n");
      break;
    }
  }
  while (ch != '"');

  printf ("\n\n");
}
