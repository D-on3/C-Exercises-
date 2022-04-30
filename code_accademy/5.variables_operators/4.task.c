#include <stdio.h>
/*5. Дефинирайте с enum месеците от годината.
При въвеждането на число от 1 до 12 
На терминала се принтира кой месец е */

enum Months{January = 1 ,February = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August = 8, September = 9, October=10, November=11,December=12};

int main(){
printf("--::::Which month it is::::--\n:::Input should be integer:::  \n          ");

int input;
scanf("%d", &input);
/*int input = (int)inpu;*/
enum Months Jan= January;
enum Months Feb= February;
enum Months Mrch= March;
enum Months Apr= April;
enum Months Ma= May;
enum Months Jun= June;
enum Months Jul= July;
enum Months Aug= August;
enum Months Sep= September;
enum Months Oct= October;
enum Months Nov= November;
enum Months Dec= December;
if(input == Jan){
    printf("Its January!\n");
}
else if(input == Feb){
    printf("Its February!\n");
}
else if(input == Mrch){
    printf("Its March!\n");
}
else if(input == April){
    printf("Its April!\n");
}
else if(input == Ma){
    printf("Its May!\n");
}
else if(input == Jun){
    printf("Its June!\n");
}
else if(input == Jul){
    printf("Its July!\n");
}
else if(input == Aug){
    printf("Its August!\n");
}
else if(input == Sep){
    printf("Its September!\n");
}
else if(input == Oct){
    printf("Its October!\n");
}
else if(input == Nov){
    printf("Its November!\n");
}
else if(input == Dec){
    printf("Its December!\n");
}
return 1;

}