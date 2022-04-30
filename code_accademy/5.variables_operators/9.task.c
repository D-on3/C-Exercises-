#include <stdio.h>

/*Задайте стойности на променливите:
char feeling[25] ;
char who[25] ;
char what [25] ;
И отпечатайте изречение на екран в последователност „Who feeling what“
printf("%s %s %s!", who, feeling,what);*/

int main(){

    char feeling[25]="is thinking";
    char who[25]="Somebody";
    char what[25]="straight";
    printf("%s %s %s!", who, feeling,what);
    return 0;
}