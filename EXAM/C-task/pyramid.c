#include<stdio.h> 
int main() 
{
int iRows;
int iColumns;
int iNNumber; 
printf("Enter number n\n"); 
scanf("%d", &iNNumber); 
for(iRows = 1 ; iRows <= iNNumber ; iRows++) //loop for making rows 
{
    for (iColumns = 1 ; iColumns <= 2*iNNumber-1 ; iColumns++) //Loop for columns 
{
      if (iColumns >= iNNumber-(iRows-1) && iColumns <= iNNumber+(iRows-1)) //logic for whitespaces and restrictions for the pattern
      { printf("@"); }
      else 
      {printf(" "); } 
} 
printf("\n");
}
}
