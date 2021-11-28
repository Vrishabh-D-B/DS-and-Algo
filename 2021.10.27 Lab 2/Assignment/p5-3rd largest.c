
#include <stdio.h>
#define NUM 5
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void Sort(int arr[], int n)
{
int i, j;
for (i = 0; i < n-1; i++)	
    for (j = 0; j < n-i-1; j++)
		if (arr[j] > arr[j+1])
			swap(&arr[j], &arr[j+1]);
}
void main()
{
    int i,arr[NUM];
    
    printf("Enter %d values for arr : ",NUM);
    for(i=0;i<NUM;i++)
        scanf("%d",&arr[i]);

    Sort(arr, NUM);
    printf("Third Largest:- %d \n",arr[2]);
}