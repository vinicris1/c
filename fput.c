#include <stdio.h>

int main()
{
  int i;
  FILE *my_stream;
  char my_filename[] = "s.txt";

  my_stream = fopen (my_filename, "w");

  putc ('X', my_stream);
  putc (' ', my_stream);
  for (i=1; i<=10; i++)
    {
      putc ('!', my_stream);
    }
  putc ('\n', my_stream);

  /* Close stream; skip error-checking for brevity of example */
  fclose (my_stream);

  return 0;
}
