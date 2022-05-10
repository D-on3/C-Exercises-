#include <stdio.h>


int main(){

int iTotalSum=0;
int iRangeStart=1;
do{
if(iRangeStart % 2 != 0){
iTotalSum += iRangeStart;
}
iRangeStart += 1;
printf("%d\n",iTotalSum);
}while(iRangeStart <= 20);
    return 0;
}