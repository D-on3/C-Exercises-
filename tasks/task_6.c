#include<stdio.h>
#include<conio.h>
int main()
{
    char str[20];
    printf("Enter your first name: ");
    scanf("%s", str);
    printf("Hello, %s", str);
    getch();
    return 0;
}