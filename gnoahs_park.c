#include <stdio.h>

void calculate_park_biomass(){
    float avg_gnu_mass = 1;
    float avg_gnat_mass = 2;
    printf("avg gnu = %f\n", avg_gnu_mass);
    printf("avg gnat = %f\n", avg_gnat_mass);
}
int num_gnus = 5;
int num_gnats = 10;

void main(){
    /*float avg_gnu_mass = 25;
    float avg_gnat_mass = 50;
    printf("avg gnu = %f\n", avg_gnu_mass);
    printf("avg gnat = %f\n", avg_gnat_mass);*/
    printf("num gnus = %d\n", num_gnus);
    printf("num gnats = %d\n", num_gnats);

    calculate_park_biomass();

}
