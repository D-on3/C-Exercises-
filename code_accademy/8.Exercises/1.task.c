#include  <stdio.h>

int main(){

char sUserInput;
printf("Choose product: \n");
printf("1-Chocolate. \n");
printf("2-Sticks.\n");
printf("3-Salt Biscuits\n");
printf("4-Sweet Biscuits\n");
printf("5-Water\n");
printf("6-Juice\n");
scanf("%d",&sUserInput);
switch (sUserInput){
case 1:
printf("You choice is: Chocolate\n");
break;
case 2:
printf("You choice is: Sticks \n");
break;
case 3:
printf("You choice is: Salt biscuits \n");
break;
case 4:
printf("You choice is: Sweet Biscuits\n");
break;
case 5:
printf("You choice is: Water \n");
break;
case 6:
printf("You choice is: Juice \n");
break;
}
    return 0;
}