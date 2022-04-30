#include <stdio.h>

/*Задача 8
▪ Представете си, че сте на гише за регистрация за игра на мини голф.
Започвате деня с 20 топчета за голф. Работата ви е да давате по едно топче и
един клъб на всеки регистриран играч. Проследете с програма как се
променят наличните топчета през деня:
*/

int main(){

int iBalls= 20 ;
float fTotalSum;
int iTotalPLayers;
int iTotalTeams;
/*▪ Идват 2 ма играча;*/
 iBalls = iBalls - 2;
 iTotalPLayers = iTotalPLayers + 2;
 iTotalTeams = iTotalTeams +1;
 /*▪ Идва група от 5 ма играча;*/
 iBalls =  iBalls - 5;
 iTotalPLayers = iTotalPLayers + 5 ;
 iTotalTeams = iTotalTeams +1;
 /*▪ Идва група от 3 ма играча;*/
 iBalls =  iBalls - 3;
 iTotalPLayers = iTotalPLayers + 3;
 /*Първите двама приключват и връщат топчетата;*/ 
 iBalls = iBalls + 2;
 iTotalTeams = iTotalTeams -1;
/*▪ Идва група от 4 ма играча;*/
 iBalls =  - iBalls - 4;
 iTotalPLayers = iTotalPLayers + 4;
 iTotalTeams = iTotalTeams +1;
/* Идва група от 6 ма играча;*/
 iBalls =  - iBalls - 6;
 iTotalPLayers = iTotalPLayers + 6;
 iTotalTeams = iTotalTeams +1;
 /*▪ Групата от 5 човека приключва играта и връща оборудването, но 2 ма от тях
решават да направят и втора обиколка.*/
iBalls = iBalls + 3 ;
/*Добавяме още двамата към общата сума от играчи*/
iTotalPLayers = iTotalPLayers + 2; 

/*▪ Отпечатайте на екрана броя на топчетата в края на деня.
printf(“%d”, variableName);*/
printf("%d",iBalls);

/*▪ Ако цената за 1 игра, за 1 човек е 3,50 изчислете колко пари има в касата до
момента.
▪ Проследете колко екипа има в момента на игрището.
▪ Отпечатайте и двата резултата на екран.*/
fTotalSum = (float)iTotalPLayers * 3.5 ;
printf("%f",iTotalSum);
printf("%d",iTotalTeams)



}