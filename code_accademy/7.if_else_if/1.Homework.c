#include <stdio.h>

/*Правите програма за фитнес упражнения и давате опция на трениращия да
избере каква е целта на тренировката му, като съобразно с това му давате
инструкции:*/

/*
1. Сила - "Прави упражненията с максималната тежест, на която си способен и 6
повторения!";
2. Издръжливост - "Прави упражненията с малка тежест 5-10 кг и 20
повторения!";
3. ;
*/

int main(){
char sUsr_input[12];
fgets(sUsr_input,12,stdin);
char sStrenght[9] = "Strenght";
char sEndurance[12] = 'Endurance';
char sTonus[12] = 'Tonus';
printf("%s",sUsr_input);
if(sUsr_input == sStrenght){
    printf("Suxex");
}


}