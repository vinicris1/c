#include <stdio.h>

int main()
{
  int row, column;
  FILE *my_stream;
  int close_error;
  char my_filename[] = "my_numbers.dat";
  size_t object_size = sizeof(int);
  size_t object_count = 25;
  size_t op_return;

  int my_array[5][5] =
  {
    2,  4,  6,  8, 10,
    12, 14, 16, 18, 20,
    22, 24, 26, 28, 30,
    32, 34, 36, 38, 40,
    42, 44, 46, 48, 50
  };
  printf ("Initial values of array:\n");
  for (row = 0; row <= 4; row++)
    {
      for (column = 0; column <=4; column++)
	{
	  printf ("%d  ", my_array[row][column]);
	}
      printf ("\n");
    }

  my_stream = fopen (my_filename, "w");
  op_return = fwrite (&my_array, object_size, object_count, my_stream);
  if (op_return != object_count)
    {
      printf ("Error writing data to file.\n");
    }
  else
    {
      printf ("Successfully wrote data to file.\n");
    }

  /* Close stream; skip error-checking for brevity of example */
  fclose (my_stream);

  printf ("Zeroing array...\n");
  for (row = 0; row <= 4; row++)
    {
      for (column = 0; column <=4; column++)
	{
	  my_array[row][column] = 0;
	  printf ("%d  ", my_array[row][column]);
	}
      printf ("\n");
    }

  printf ("Now reading data back in...\n");
  my_stream = fopen (my_filename, "r");
  op_return = fread (&my_array, object_size, object_count, my_stream);
  if (op_return != object_count)
    {
      printf ("Error reading data from file.\n");
    }
  else
    {
      printf ("Successfully read data from file.\n");
    }
  for (row = 0; row <= 4; row++)
    {
      for (column = 0; column <=4; column++)
	{
	  printf ("%d  ", my_array[row][column]);
	}
      printf ("\n");
    }

  /* Close stream; skip error-checking for brevity of example */
  fclose (my_stream);

  return 0;
}
