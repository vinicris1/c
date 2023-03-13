#include <stdio.h>
#include <errno.h>

int main()
{
  float f1, f2;
  int i1, i2;
  FILE *my_stream;
  char my_filename[] = "s.txt";

  my_stream = fopen (my_filename, "w");
  fprintf (my_stream, "%f %f %#d %#d", 23.5, -12e6, 100, 5);

  /* Close stream; skip error-checking for brevity of example */
  fclose (my_stream);

  my_stream = fopen (my_filename, "r");
  fscanf (my_stream, "%f %f %i %i", &f1, &f2, &i1, &i2);

  /* Close stream; skip error-checking for brevity of example */
  fclose (my_stream);

  printf ("Float 1 = %f\n", f1);
  printf ("Float 2 = %f\n", f2);
  printf ("Integer 1 = %d\n", i1);
  printf ("Integer 2 = %d\n", i2);

  return 0;
}
