#include <stdio.h>
#include <math.h>

//#!/usr/bin/python3
//weight = 80
//#TODO: IN CASE THAT THER MUST BE INPUTED VALUE FROM THE USER
//#weight = int(input())
//height = 1.71
//#TODO: IN CASE THAT THER MUST BE INPUTED VALUE FROM THE USER
//#height = int(input())
//bmi = (weight/height**2)
//if bmi < 24.9:
//    print('you rock')
//else:
//    print('more training, less eating')
//
int main (){
// we are propmpting the user to enter a value for weight
    double fWeight;
    // we are prompting the user to enter a value for height
    double fHeight;
    double fBmi;

    printf("Enter height: \n");
    scanf("%lf",&fHeight);
    printf("Enter weight: \n");
    scanf("%lf",&fWeight);

    //calculation of BIM  
    fBmi = fWeight / pow(fHeight,2);
    
    printf("This is fBMI: %lf\n",fBmi);
    printf("This is total sum : %3.2lf",fBMI);
    return 0;
}
