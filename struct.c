#include <stdio.h>
#include <stdlib.h>

struct personal_data
{
  char name[100];
  char address[200];
  int year_of_birth;
  int month_of_birth;
  int day_of_birth;
} person0001;

struct personal_data my_struct_array[100]; //array of 100 personal datas

struct first_structure_type
{
  int integer_member;
  float float_member;
};

struct second_structure_type //nested struct
{
  double double_member;
  struct first_structure_type struct_member;
};

struct personal_data *my_struct_ptr;

void main(int argc, char *argv[], char *envp[]){
    person0001.year_of_birth = 12;

    my_struct_array[3].year_of_birth = 1965;

    int yob = my_struct_array[3].year_of_birth;

    printf("%d\n", person0001.year_of_birth);
    printf("%d\n", yob);

    struct second_structure_type demo;

    demo.double_member = 12345.6789;
    demo.struct_member.integer_member = 5;
    demo.struct_member.float_member = 1023.17;

    printf("%f\n%d\n%.2f", demo.double_member, demo.struct_member.integer_member, demo.struct_member.float_member);

    struct personal_data person1;
    my_struct_ptr = &person1;
    (*my_struct_ptr).day_of_birth = 23;
    printf("\n%d\n", my_struct_ptr->day_of_birth); //can write that way or (*my_struct_ptr).day_of_birth the ( is only to avoid confusion with * and .
}
