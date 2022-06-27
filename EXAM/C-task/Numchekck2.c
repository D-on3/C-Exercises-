#include <stdio.h>
#include <stdbool.h>

int main(){
    
    int array[20]= {0, 1, 0, 1, 0,0, 1, 0, 1, 0,0, 1, 0, 1, 0,0, 1, 0, 1, 0,};
    int  iElement = 0;
    int iCounter;
    bool bCheck = true;
for(iElement; iElement<20 ; array[iElement++])
{   
    if(array[iElement] >= 1){
        iCounter ++;

}
        printf("%hi\n",iCounter);
}
}