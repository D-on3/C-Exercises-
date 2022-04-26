#include <stdio.h>

int main(){

float input_USD ;
float exchange = 1.79549;
printf("Enter amount: \n");
scanf("%f",&input_USD);
float calc = input_USD * exchange;
printf("%f\n",calc);
}