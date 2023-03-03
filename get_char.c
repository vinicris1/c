#include <stdio.h>

int main()
{
  int input_character;

  printf("Hit any key, then hit RETURN.\n");
  input_character = getchar();
  printf ("The key you hit was '%c'.\n", input_character);
  printf ("Bye!\n");

  return 0;
}
