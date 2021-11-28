#define Row 3
#define Column 3
#include<stdio.h>

int main()
{
    int i, j, first[Row][Column], second[Row][Column], sum[Row][Column], diff[Row][Column];
    
    printf("Enter the %d elements of the first matrix : ", Row*Column);
    for(i = 0; i < Row; i++)   
        for(j = 0; j < Column; j++)   
            scanf("%d", &first[i][j]);

    printf("Enter the %d elements of the second matrix : ", Row*Column);
    for(i = 0; i < Row; i++)   
        for(j = 0; j < Column; j++)   
            scanf("%d", &second[i][j]);

    for(i = 0; i < Row; i++)
        for(j = 0; j < Column; j++)
        {
            sum[i][j] = first[i][j] + second[i][j];
            diff[i][j] = first[i][j] - second[i][j];
        }   


    printf("The sum of the two entered matrices is: \n");
    for(i = 0; i < Row; i++)
     {
        for(j = 0; j < Column; j++)
            printf("%d\t", sum[i][j]);
        printf("\n");
     }  
    
    printf("The difference(subtraction) of the two entered matrices is: \n");
    for(i = 0; i < Row; i++)
    {
        for(j = 0; j < Column; j++)
            printf("%d\t", diff[i][j]);
        printf("\n");
    }

    
    return 0;
}