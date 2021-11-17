#define NUM 5
#include<stdio.h>
void main()
{
    int i,arr[NUM],max;
    
    printf("Enter %d Elements for array : ",NUM);
    for(i = 0; i < NUM; i++)
        scanf("%d",&arr[i]);

    int *p = &arr[0];
    max = *(p + 0);
    
    for(i=0;i<NUM;i++)
    {
        if(*(p + i) > max)
            max = *(p + i);
    }
    printf("Largest = %d\n",max);
}