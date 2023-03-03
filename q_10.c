#include <stdio.h>
#include <stdlib.h>

int main()
{
  int input_character[5];

  printf("Hit any key, then hit RETURN.\n");
  scanf ("%d", &input_character[0]);
  scanf ("%d", &input_character[1]);
  scanf ("%d", &input_character[2]);
  scanf ("%d", &input_character[3]);
  scanf ("%d", &input_character[4]);

  if(input_character[0] != 0 && input_character[1] != 0){
    printf ("Ur numbers is '%d' , '%d' , '%d' , '%d' and '%d'\n.\n", input_character[0], input_character[1], input_character[2], input_character[3], input_character[4]);

    for (int i = 1; i < 5; ++i) {
        if (input_character[0] < input_character[i]) {
            input_character[0] = input_character[i];
        }
    }

    printf("Largest element = %d\n", input_character[0]);
  }

  return 0;
}
