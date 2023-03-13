#include <stdio.h>

int main()
{
  FILE *my_stream;
  char my_filename[] = "s.txt";
  int flush_status;

  my_stream = fopen (my_filename, "w");
  fputs ("If it's not too late... make it a cheeseburger.\n", my_stream);

  /*
     Since the stream is fully-buffered by default, not line-buffered,
     it needs to be flushed periodically.  We'll flush it here for
     demonstration purposes, even though we're about to close it.
  */
  flush_status = fflush (my_stream);
  if (flush_status != 0)
    {
      puts ("Error flushing stream!");
    }
  else
    {
      puts ("Stream flushed.");
    }


  /* Close stream; skip error-checking for brevity of example */
  fclose (my_stream);

  return 0;
}
