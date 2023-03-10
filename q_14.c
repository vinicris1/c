#include <stdio.h>

//2. array as paramter = "void mult(int[], int)" - "mult(array_name,X)"
//3. only point
//4. last

int main(){
    int row, column;
    double my_array[4][5] =
 {
    {1, 2, 3, 4, 5},
    {6, 7, 8, 9, 10},
    {11, 12, 13, 14, 15},
    {16, 17, 18, 19, 20}
 };
   // printf("%.0f", my_array[0][0]);

  for (row = 0; row <=3; row++)
    {
      for (column = 0; column <= 4; column++)
	{
	  printf("%.0f\t", my_array[row][column]);
	}
      printf("\n");
    }

  printf("\n");

  return 0;

}
