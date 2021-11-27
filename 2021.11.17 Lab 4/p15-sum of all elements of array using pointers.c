#define NUM 5
#include<stdio.h>
void main()
{
    int i,arr[NUM];

    printf("Enter %d Elements for array : ",NUM);
    for(i = 0; i < NUM; i++)
        scanf("%d",&arr[i]);

    int *p = &arr[0];
    int sum = 0;
    
    for(i=0;i<NUM;i++)
        sum = sum + *(p + i);

    printf("SUM = %d\n",sum);
}