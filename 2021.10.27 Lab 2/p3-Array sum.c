#define NUM 5

#include<stdio.h>
void main()
{
    int i, arr1[NUM], arr2[NUM], arr3[NUM];
    
    printf("Enter %d values for arr1 : ",NUM);
    for(i=0;i<NUM;i++)
        scanf("%d",&arr1[i]);

    printf("Enter %d values for arr2 : ",NUM);
    for(i=0;i<NUM;i++)
        scanf("%d",&arr2[i]);

    for(i=0;i<NUM;i++)
        arr3[i] = arr1[i] + arr2[i];

    printf("Sum array : ");
    for(i=0;i<NUM;i++)
        printf("%d ",arr3[i]);
    
    printf("\n");
}