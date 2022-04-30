#include <stdio.h>

/*7. Създайте С програма, която калкулира стойността на покупки в плод
и зеленчук. Клиентът може да закупи различна комбинация от продукти.
Имате следните налични продукти и цени:
Домати- 4.5 лв.,Краставици-2.80 лв.,
Ябълки- 2.50 лв.,Череши- 5.60 лв.
Указания:
1. Помислете какви променливи ще дефинирате?
2. Помислете в каква последователност ще изпълнявате действията?
3. В момента няма да проверяваме въведените стойности от клиента.
printf("Здравейте, добре дошли в нашия плод и зеленчук! Днес предлагаме пресни домати, краставици,
ябълки и череши.\n");
printf("Колко килограма домати ще желаете? ");
scanf("%f",&fTomatoWeight);
float fTomatoTotal = fTomatoWeight*fTomatoPrice;*/

int main(){

/*Prices of products */
float fTomatoPrice = 4.5;
float fCucumbers = 2.80;
float fApples = 2.50;
float fCheries =  5.60;
/* This will be our final result */
float totalPrice ;
float fTomatoWeight;
float fCucumbersWeight;
float fApplesWeight;
float fCherriesWeight;

printf("Hello ,wellcome to our vegetable store!Today we are offering you fresh tomatos , cucumbers,apples and cherries\n");

printf("How many kg of tomatoes do you want? \n");
scanf("%f",&fTomatoWeight);
float fTomatoTotal = fTomatoWeight*fTomatoPrice;
printf("How many kg of cucumbers do you want? \n");
scanf("%f",&fCucumbersWeight);
float fCucumbersTotal = fCucumbersWeight*fCucumbers;
printf("How many kg of apples do you want? \n");
scanf("%f",&fApplesWeight);
float fApplesTotal = fApplesWeight*fApples;
printf("How many kg of cherries do you want? \n");
scanf("%f",&fCherriesWeight);
float fCheriesTotal = fCherriesWeight*fCheries;


totalPrice = fTomatoTotal + fCheriesTotal + fApplesTotal + fCheriesTotal;
printf("Your bill is %.2f lv.",totalPrice);
return 1;


}