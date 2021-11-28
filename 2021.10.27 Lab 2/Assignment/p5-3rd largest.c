#define NUM 5

#include<stdio.h>
void main()
{
    int arr[NUM];
    int x,y,z,i;

    printf("Enter %d values for arr : ",NUM);
    for(i=0;i<NUM;i++)
        scanf("%d",&arr[i]);

    x=y=z=arr[0] ;

    for(i=1;i<NUM;i++)
    {
        if (arr[i]>z)
        {
            x=y;
            y=z;
            z=arr[i];
        }
        else if(arr[i]>y)
        {
            x=y;
            y=arr[i];
        }
        else if(arr[i]>x)
            x=arr[i];
    }
    printf("Third largest : %d \n",x);
}