#include <stdio.h>


int main(){
int iRangeStart=1;
int iRangeEnd = 20;
int iTotalSum= 0;

while(iRangeStart<=20){   
    if(iRangeStart % 2 == 0){
        iTotalSum += iRangeStart;
    }
    iRangeStart += 1;
    printf("%d\n",iTotalSum);
}

    return 0;
}