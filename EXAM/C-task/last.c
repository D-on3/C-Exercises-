#include<stdio.h>
void main()
{
    int arr[100];
    int i,n;
    printf("Enter array size:");
    scanf("%d",&n);
    printf("Enter array elaments:");
    for(i=0;i<n;i=i+1)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array elements are:");
    for(i=0;i<n;i=i+1)
    {
        printf("%d",arr[i]);
    }
} 