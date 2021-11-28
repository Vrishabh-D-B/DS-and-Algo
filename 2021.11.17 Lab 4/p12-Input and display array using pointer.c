#include<stdio.h>
void main()
{
    int arr[10], i;

    printf("Enter 10 Elements for array : ");
    for(i = 0; i < 10; i++)
        scanf("%d",&arr[i]);
    
    int *p = &arr[0];
    
    printf("\nElements of array are : ");
    for(i = 0; i < 10; i++)
        printf("%d ",*(p + i));
    printf("\n");
    
}