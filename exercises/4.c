#include <stdio.h>
#include <stdlib.h>


int main(){
    int quant, a, count = 0, maxValue = 0, maxCount = 0;
    int numArray[50];
    float mediana, average, sum = 0;

    printf("Programa para botar numeros em ordem crescente\n");
    printf("Insira a quantidade de numeros:");
    scanf("%d", &quant);

    for(int i = 0; i < quant; i++){
        printf("Insira o %d numero:", i+1);
        scanf("%d", &numArray[i]);
    }

    /*ORDEM CRESCENTE*/
    for(int i = 0; i < quant; i++){ 
       for (int j = i + 1; j < quant; j++){ 
            if(numArray[i] > numArray[j]){ 
                a = numArray[i]; 
                numArray[i] = numArray[j]; 
                numArray[j] = a; 
            }
       }
    }

    for (int i = 0; i < quant; i++){
        printf("%d\n", numArray[i]);
    }
    /*FIM ORDEM CRESCENTE*/

    /*MEDIA*/

    for(int i = 0; i < quant; i++){ 
      sum = numArray[i] + sum;
    }
    average = sum / quant;
    printf("Media: %.2f\n", average);
    /*FIM MEDIA*/

    /*MEDIANA*/
    if(quant % 2 == 0){
        mediana = quant / 2 + ((quant / 2) + 1);
        printf("Mediana: %.1f\n", mediana / 2);
    }else{
        printf("Mediana: %d\n", numArray[quant / 2]);
    }
    /*FIM MEDIANA*/

    /*MODA*/

    for (int i = 0; i < quant; i++) {
      
      for (int j = 0; j < quant; j++) {
         if (numArray[j] == numArray[i])
         ++count;
      }
      
      if (count > maxCount) {
         maxCount = count;
         maxValue = numArray[i];
      }
   }

    printf("Moda: %d", maxValue);

    /*FIM MODA*/
    

}

