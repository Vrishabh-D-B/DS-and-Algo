 #include<stdio.h>
void swap(int arr[],int i,int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void main()
{
    int arr[10];
    int *ptr = arr, i, j;

    printf("Enter 10 numbers : ");
    for(i=0;i<10;i++,ptr++)
        scanf("%d",ptr);

    ptr = arr;
    for(i=0;i<10;i++)
        for(j=i;j<10;j++)
            if(*(ptr + i) > *(ptr + j))
                swap(arr,i,j);

    ptr = arr;
    printf("\nSorted Array : \n");
    for(i=0;i<10;i++)
        printf("%d ",*(ptr+i));
    printf("\n");
}  