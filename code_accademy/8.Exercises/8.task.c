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
int iTypeOfExercise;
scanf("%d",&sTypeOfExercise);

if(iTypeOfExercise == 1){
    printf('Streighnt  "Make exercises with heavy weight that you are capable of lift 6 times."');
}
else if(iTypeOfExercise == 2) {
    printf('Endurance- "Make exercises with small weight 5-10 kg - 20 times"');
}
else if(iTypeOfExercise == 3){
    printf('Tonus - "Make exercises with medium weight not more than 20 kg for 15 times."');
}
else{
    printf("Невалидна команда!");
}

ng
    return 0;
}