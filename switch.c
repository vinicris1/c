#include <stdio.h>

int main ();
void morse (int);


int main ()
{
  int digit;

  printf ("Enter any digit in the range 0 to 9: ");
  scanf ("%d", &digit);

  if ((digit < 0) || (digit > 9))
  {
    printf ("Your number was not in the range 0 to 9.\n");
  }
  else
  {
    printf ("The Morse code of that digit is ");
    morse (digit);
  }
  return 0;
}


void morse (int digit)        /* print out Morse code */
{
  switch (digit)
  {
    case 0 : printf ("-----");
      break;
    case 1 : printf (".----");
      break;
    case 2 : printf ("..---");
      break;
    case 3 : printf ("...--");
      break;
    case 4 : printf ("....-");
      break;
    case 5 : printf (".....");
      break;
    case 6 : printf ("-....");
      break;
    case 7 : printf ("--...");
      break;
    case 8 : printf ("---..");
      break;
    case 9 : printf ("----.");
  }
  printf ("\n\n");
}

