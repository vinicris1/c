#include <stdio.h>
#include <string.h>

char *menu[] =
{
  "  -------------------------------------- ",
  " |            ++ MENU ++                |",
  " |           ~~~~~~~~~~~~               |",
  " |     (0) Edit Preferences             |",
  " |     (1) Print Charge Sheet           |",
  " |     (2) Print Log Sheet              |",
  " |     (3) Calculate Bill               |",
  " |     (q) Quit                         |",
  " |                                      |",
  " |                                      |",
  " |     Please enter choice below.       |",
  " |                                      |",
  "  -------------------------------------- "
};


int main()
{
  int line_num;

  for (line_num = 0; line_num < 13; line_num++)
    {
      printf ("%s\n", menu[line_num]);
    }

  /* Example 1 */
  char string1[] = "A string declared as an array.\n";

  /* Example 2 */
  char *string2 = "A string declared as a pointer.\n";

  /* Example 3 */
  char string3[30];
  strcpy(string3, "A string constant copied in.\n");

  printf (string1);
  printf (string2);
  printf (string3);

    char string5[50] = "Hello, ";
    char string6[] = "world!\n";
    strcat (string5, string6); //Concatenates two strings
    printf (string5);

  return 0;
}
