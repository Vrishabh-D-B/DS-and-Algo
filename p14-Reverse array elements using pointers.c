#define NUM 5
#include<stdio.h>
void main()
{
    int i, arr[NUM],temp;
    
    printf("Enter %d Elements for array : ",NUM);
    for(i = 0; i < NUM; i++)
        scanf("%d",&arr[i]);
    
    int *p = &arr[0];
    int *q = &arr[NUM-1];

    for(i=0; i<NUM/2;i++)
    {
        temp = *(p + i);
        *(p + i) = *(q - i);
        *(q - i) = temp;
    }

    printf("\nElements of array are : ");
    for(i = 0; i < NUM; i++)
        printf("%d ",*(p + i));

    printf("\n");
}