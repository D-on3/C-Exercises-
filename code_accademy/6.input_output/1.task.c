#include <stdio.h>

int main(){

char txt[10];
scanf("%[^abcd]",txt);
printf("%s",txt);
return 0;

}