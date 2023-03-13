#include <stdio.h>

int main()
{
  FILE *my_stream;

  my_stream = fopen ("teste.txt", "w+");

  if (my_stream == NULL)
    {
      printf ("File could not be opened\n");
    }
  else
    {
      printf ("File opened!  Closing it now...\n");
      /* Close stream; skip error-checking for brevity of example */
      fclose (my_stream);
    }
  return 0;
}

/*
#include <stdio.h>

int main()
{
  FILE *my_stream;
  char my_filename[] = "snazzyjazz.txt";
  int close_error;

  my_stream = fopen (my_filename, "w");
  fprintf (my_stream, "Just a little hello from fprintf.\n");

  close_error = fclose (my_stream);

  if (close_error != 0)
    {
      printf ("File could not be closed.\n");
    }
  else
    {
      printf ("File closed.\n");
    }

  return 0;
}*/
