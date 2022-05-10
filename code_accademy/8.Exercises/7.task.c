#include <stdio.h>

/*Отпечатайте на екрана поредните цели числа от 10 до 20, използвайки dowhile цикъл.*/
int main(){

int iRangeStart = 10;
do {
printf("%d\n",iRangeStart);
iRangeStart+= 1;
} while(iRangeStart <= 20); 


    return 0;
}