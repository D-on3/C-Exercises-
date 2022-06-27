#include <stdio.h>
//number_input = int(input())
//if number_input > 0:
//    if number_input % 2 == 0:
//        print('even')
//    else:
//        print('odd')


int main(){

//declaring 
    int fNumber;

    printf("Enter a number: \n");
    scanf("%lf", &fNumber);


    if (fNumber % 2 == 0){
        printf("even\n");
    }
    else{
        printf("odd\n");
        }

    return 0;
}