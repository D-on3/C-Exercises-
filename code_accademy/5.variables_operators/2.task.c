#include <stdio.h>

/*Дефинирайте променливи със стойност 43 112, -1 357 674, 1 357
674, -1 357 674 000, 3 657 895 000.
Изведете всяка променлива на екрана със printf()*/

int  main(){
unsigned long int iVar= 43112;
signed long int iVar2= -1357674;
int iVar3= 1357;
int iVar4= 674;
signed long long int iVar5= -1357674000; 
unsigned long long int iVar6=3657895000u;

printf("%ld\n",iVar);
printf("%li\n",iVar2);
printf("%d\n",iVar3);
printf("%d\n",iVar4);
printf("%lli\n",iVar5);
printf("%llu\n",iVar6);
return 0;
}