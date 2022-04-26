#include <stdio.h>

int main(){

float pi = 3.14;
float radian_input ;
float calc_degress;
printf("Enter radian value: \n");
scanf("%f",&radian_input);
calc_degress = (radian_input * 180) / pi;
printf("Degrees:  %f",calc_degress);

}