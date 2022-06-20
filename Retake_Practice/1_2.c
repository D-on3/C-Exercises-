#include <stdio.h>


#define SWAP(int,x, y) (x ^= y ^= x ^= y)

int main()
{
    int num1, num2;

    
    printf("Enter any two number to swap: ");
    scanf("%d%d", &num1, &num2);

    printf("Values before swapping\n");
    printf("num1 = %d, num2 = %d\n\n", num1, num2);

    SWAP(int,num1, num2);

    printf("Values after swapping\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
#undef SWAP