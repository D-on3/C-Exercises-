#include <stdio.h>
/*Дефинирайте променливи със стойност 4.9876543,
7.123456789012345678890, 18 398 458 438 583 853.28, 18 398 458
438 583 853.39875937284928422.
Изведете всяка променлива на екрана със printf()*/

int main(){
     
 char var1[16] = "4.9876543";
 char var2[32] = "7.123456789012345678890";
 char var3[32] = "18398458438583853.28";
 char var4[64] = "18398458438583853.39875937284928422";
printf("%s\n",var1);
printf("%s\n",var2);
printf("%s\n",var3);
printf("%s",var4);
    return 0;
}