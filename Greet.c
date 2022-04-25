#include <stdio.h>

int main()
{
char number[10];
printf("What is your favorite number?\n");
fgets(number,10,stdin);
printf("Really? My favorite number is also %s. \n",number);

return 0;
}