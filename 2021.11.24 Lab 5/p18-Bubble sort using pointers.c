#include<stdio.h>

void sort(int *a,int n)
{
    int i,temp,j;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(*(a+j)==*(a+j+1))
            {
                temp=*(a+j);
                *(a+j)=*(a+j+1);
                *(a+j+1)=temp;
            }
        }
    }
    printf("The sorted ARRAY is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    
}
void main()
{
    int a[20];
    int n,i;
    
    printf("Program for BUBBLE SORT\n");
    printf("Enter the Number of ELements you want in Array\n");
    scanf("%d",&n);
    printf("Enter the Elements in UNSOTED ARRAY\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The Unsorted ARRAY is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    sort(a,n);
    
}
