#include <stdio.h>


int main(){

int iTotal = 0;
int iFrom = 12;

while(iFrom < 21){
iTotal += iFrom;
iFrom += 1;
}

printf("%d",iTotal);
return 0;
}