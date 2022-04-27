#include <stdio.h>

int main(){

float cover_per_sqr=1.50;
float paint_per_liter = 14.50;
float paint_thinner_l = 5;
float cover; 
float paint_liters;
float thinner_liters;
float hours_for_work;

scanf("%g",&cover);
scanf("%g",&paint_liters);
scanf("%g",&thinner_liters);
scanf("%g",&hours_for_work);
float total_cover = ((cover+2)*cover_per_sqr);
float total_paint = ((paint_per_liter * paint_liters) + (paint_per_liter * paint_liters*0.1));
float total_thiner = (paint_thinner_l*thinner_liters);
float plus = 0.4;
float total_sum = total_cover + total_paint + total_thiner + plus;
float sum_for_work = (total_sum * 0.3) * hours_for_work;
float sum_total = sum_for_work + total_sum;
printf("%g\n",sum_total);

}