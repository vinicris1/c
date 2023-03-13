//Remember! Never use this function in your own code. Always use getline instead.
/*#include <stdio.h>

int main()
{
  char my_string[500];
  printf("Type something.\n");
  gets(my_string);
  printf ("You typed: %s\n", my_string);

  return 0;
}
*/

///////////////////////////////////////////////

#include <stdio.h>

int main()
{
  int input_character;
  FILE *my_stream;
  char my_filename[] = "s.txt";
  char my_string[100];

  my_stream = fopen (my_filename, "w");
  fprintf (my_stream, "Hidee ho!\n");

  /* Close stream; skip error-checking for brevity of example */
  fclose (my_stream);

  my_stream = fopen (my_filename, "r");
  fgets (my_string, 100, my_stream);

  /* Close stream; skip error-checking for brevity of example */
  fclose (my_stream);

  printf ("%s", my_string);

  return 0;
}
