#include <stdio.h>

int main(){

float number_of_pages,number_pages_hour,number_of_days,pages_total_time,final_calc;

printf("Enter number of pages: \n");
scanf("%g",&number_of_pages);
printf("Number of pages for hour: \n");
scanf("%g",&number_pages_hour);
printf("Number of day to read: \n");
scanf("%g",&number_of_days);

pages_total_time = number_of_pages / number_pages_hour;

final_calc = pages_total_time / number_of_days;
printf("%g\n",final_calc);
printf("The dude will must read at least %g to finish in time.\n",final_calc);

}