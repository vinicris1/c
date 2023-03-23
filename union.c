#include <stdio.h>
#include <stdlib.h>

union int_or_float
{
  int int_member;
  float float_member;
};

enum which_member
{
  INT,
  FLOAT
};

struct multitype
{
    union int_or_float number;
    enum which_member status;
};

int main(){
    union int_or_float my_union1, my_union2; //with union i can transform whatever type

    my_union1.int_member = 5;
    my_union2.float_member = 7.7;
    enum which_member my_union_status1;


    switch (my_union_status1){
    case INT:
    my_union1.int_member += 5;

    case FLOAT:
    my_union2.float_member += 23.222333;
    break;
  }
    printf("%d\n", my_union1.int_member);
    printf("%.2f\n", my_union2.float_member);


        struct multitype my_multi;
        my_multi.number.int_member = 5;
        my_multi.status = INT;
            printf("%d\n", my_multi.number.int_member);

}
