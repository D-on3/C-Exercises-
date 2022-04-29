#include <stdio.h>

/*Дефинирайте променливи със стойност -250, 250, 4 589 498, 10
000 000 000 000 000 000, -9 000 000 000 000 000 000.
Изведете всяка променлива на екрана със printf() */

int main(){

 int iVar = -250 ;
 int iVar2 = 250 ;
 int iVar3 = 4 ;
 long int iVar4 = 589498 ;
 unsigned long long int iVar5 = 10000000000000000000u ;
 signed long long int iVar6 =   -9000000000000000000 ;

 printf("%d\n",iVar);
 printf("%d\n",iVar2);
 printf("%d\n",iVar3);
 printf("%lu\n",iVar4);
 printf("%llu\n",iVar5);
 printf("%lli\n",iVar6);
 
 return 1;

    
}