#include <stdio.h>
#include <stdlib.h>

struct node
{
  int value;
};

struct node one = {
   0
};

struct node two = {
    0
};

struct node three = {
    0
};

int main(){
    for(int i = 3; i >= one.value; one.value++)
        printf("one value: %d\n", one.value);

        for(int x = 10; x >= two.value; two.value++)
        printf("two value: %d\n", two.value);

        printf("number of three:");
        scanf("%d", &three.value);
        printf("three value: %d\n", three.value);
}
