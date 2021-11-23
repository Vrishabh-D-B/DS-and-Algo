#include<stdio.h>
void main()
{
    int i, arr1[10], arr2[10], arr3[10], EvenIndex=0, OddIndex=0;
    //test
    //int EvenCount, OddCount;
   
    printf("Entering 10 elements\n");
    for(i=0;i<10;i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr1[i]);
    }

    for(i=0;i<10;i++)
    {
        if(arr1[i]%2==0)
        {
            arr2[EvenIndex++] = arr1[i];
        }
        else
        {
            arr3[OddIndex++] = arr1[i];
        }
    }
    //EvenCount = EvenIndex + 1;
    //OddCount = OddIndex + 1;

    printf("\nMain Array : ");
    for(i=0;i<10;i++)
    {
        printf(" %d ",arr1[i]);
    }

    printf("\nEven Array : ");
    for(i=0;i<EvenIndex;i++)
    {
        printf(" %d ",arr2[i]);
    }

    printf("\nOdd Array : ");
    for(i=0;i<OddIndex;i++)
    {
        printf(" %d ",arr3[i]);
    }
    printf("\n");
}