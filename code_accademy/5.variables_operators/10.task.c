#include <stdio.h>


/*Задача 10
▪ Намислете си цяло число от 1 до 10. Създайте променлива и я
иницализирайте с него.
▪ Съберете го с 5.
▪ Получената стойност умножете по 4.
▪ От резултата извадете 3 и разделете на 2.
▪ Принтирайте крайната стойност на променливата на екрана.
Отговаря ли резултатът на очакванията ви?*/
int main(){

int iWholeNumber = 7;
int iFinalNumber ;
iFinalNumber = iWholeNumber + 5;
iFinalNumber = iFinalNumber * 4 ;
iFinalNumber = (iFinalNumber -3) / 2; 
printf("Final result is : %d ",iFinalNumber);

}