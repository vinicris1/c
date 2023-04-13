#include <stdio.h>
#include <stdlib.h>

int main(){
    int num[] = {50, 25, 33, 42, 25, 39, 70, 23, 32, 41, 51, 62, 70, 33, 25, 32, 43, 25, 50, 60, 38, 51, 63, 80, 25};
    int sum = 0, max, a, maxValue = 0, maxCount = 0;
    int n = 25;
    float average;


    for(int i = 0; i < n; i++){ //first num
       for (int j = i + 1; j < n; j++){ // first + 1 num
            if(num[i] > num[j]){ //if num 0 > num 1; 
                a = num[i]; //a = 2
                num[i] = num[j]; // num[0] = 1
                num[j] = a; //num[1] = 2
            }
       }
    }
    
    for (int i = 0; i < n; i++){
        printf("%d\n", num[i]);
    }

    printf("Mediana: %d", num[12]);

    for(int z = 1; z <= n; z++){
        sum = sum + num[z];
    }
     
    average = sum / n;
    printf("\nMedia: %.2f\n", average);

    

   for (int i = 0; i < n; i++) {
      int count = 0;
      
      for (int j = 0; j < n; j++) {
         if (num[j] == num[i])
         ++count;
      }
      
      if (count > maxCount) {
         maxCount = count;
         maxValue = num[i];
      }
   }

    printf("Moda = %d", maxValue);

}