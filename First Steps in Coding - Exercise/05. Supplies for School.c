#include <stdio.h>


int main(){

float pack_pens_price = 5.80;
float pack_markers = 7.20;
float detergent_l = 1.2 ;
float discount ;
float pens;
float markers;
float detirgent;
printf("Number of pen packs: \n");
scanf("%f",&pens);
printf("Number of markers: \n");
scanf("%f",&markers);
printf("Liters of detergent: \n");
scanf("%f",&detirgent);
printf("Discount: \n");
scanf("%f",&discount);
float total_pens = pens * pack_pens_price;
float total_markers = markers * pack_markers;
float total_detirgent = detirgent * detergent_l;
float total_cost = total_pens + total_markers + total_detirgent;
float sum_of_cost = total_cost - (total_cost * (discount/100));
printf("Total cost of material is %g lv.\n",sum_of_cost);
}