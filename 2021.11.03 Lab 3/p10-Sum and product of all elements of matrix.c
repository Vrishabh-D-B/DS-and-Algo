#define Row 3
#define Column 3

#include<stdio.h>
int main(){
   
   int Arr[Row][Column];
   
   int i, j, sum =0, mul=1;
   printf("Enter the %d elements of the matrix : ", Row*Column);
    for(i = 0; i < Row; i++)   
        for(j = 0; j < Column; j++)   
            scanf("%d", &Arr[i][j]);

    for(i = 0; i < Row; i++)   
        for(j = 0; j < Column; j++)
        {
            sum += Arr[i][j];
            mul *= Arr[i][j];
        }
    printf("Sum = %d \n",sum);
    printf("Product = %d \n",mul);
}