#include <stdio.h>


int main(){

float deposit_sum;
float period_deposit;
float intrest;
float month_intrest;
float sum_of_all;
printf("Enter amount of the deposit: \n");
scanf("%f",&deposit_sum);
printf("Enter period of the deposit: \n");
scanf("%f",&period_deposit);
printf("Enter intrest of the deposit: \n");
scanf("%f",&intrest);
float calc_total = deposit_sum * intrest/100;
month_intrest = calc_total / 12;
sum_of_all = deposit_sum + (period_deposit * month_intrest);
printf("Total sum will be: %f\n",sum_of_all);
}