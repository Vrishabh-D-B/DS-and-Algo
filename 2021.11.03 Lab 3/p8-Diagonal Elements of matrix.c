#define Row 3
#define Column 3

#include<stdio.h>
int main()
{
    int Arr[Row][Column];
    int i,j,m,n;

   
    printf("\nEnter the %d elements of the matrix : ", Row*Column);
    for(i = 0; i < Row; i++)   
        for(j = 0; j < Column; j++)   
            scanf("%d", &Arr[i][j]);

    printf("\nThe Given matrix is: \n");
    for(i = 0; i < Row; i++)   
    {
        for(j = 0; j < Column; j++)   
        {
            printf("%d\t", Arr[i][j]);
        }
    printf("\n");
    }

    printf("\nThe Diagonals elements of a matrix are : ");

    if(Row==Column)
    {
            for(i=0;i<Row;i++)
            {
                for(j=0;j<Column;j++)
                {

                    if(i==j)
                        printf("%d", Arr[i][j]);    
                    else
                        printf(" ");   
                }
            }
            printf("\n");
    }
    else
    {
        printf("\nMatrix is not a Square Matrix.");
    }

    return 0;
}