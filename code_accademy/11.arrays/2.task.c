#include <stdio.h>



int main ()
{

int number [10] ={1,2,3,4,5,6,7,8,9,10};

int numbers[5];
int i;
for(int i=0;i<6;i++)
{
    printf("Enter number[%d]=\n",i);
    scanf("%d", & numbers[i]);
}


for(i= 0; i<5 ; i++)
{
    printf("number[%d]= %d\n",i,numbers[i]);
}
return 0;
}