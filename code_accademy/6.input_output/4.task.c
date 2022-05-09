#include <stdio.h>


int main(){

/*Използвайки scanf съберете в отделни променливи и принтирайте данните за
две имена, пол, любим музикален стил.*/

char sFirstName[20];
char sLastName[20];
char sGender[7];
char sFavMusic[20];
scanf_s("",&sFirstName);
scanf_s("",&sLastName);
scanf_s("",&sGender);
scanf_s("",&sFavMusic);

printf("First name: %s\nLast name: %s \n Gender: %s\n Favorite musical genre: %s");

return 0;
}