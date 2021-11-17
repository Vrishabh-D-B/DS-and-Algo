#define NUM 5

#include<stdio.h>
void main()
{
    int i, arr[NUM], max, min;

    printf("Enter %d values : ", NUM);
    for(i=0;i<NUM;i++)
    {
        scanf("%d",&arr[i]);
    } 

    max = arr[0];
    min = arr[0];
    for(i=0;i<NUM;i++)
    {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    printf("Entered Array : ");
    for(i=0;i<NUM;i++)
        printf("%d ",arr[i]);
    
    printf("\nMAX = %d",max);
    printf("\nMIN = %d",min);
    printf("\n");
}