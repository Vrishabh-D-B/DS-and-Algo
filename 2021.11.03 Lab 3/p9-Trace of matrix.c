#define max 10
# include<stdio.h>
void main()
{
    int Arr[max][max], m,i,j, sum = 0;
    printf ("Enter order of the square matrix :") ;
    scanf ("%d", &m);
    
    printf("Enter the %d elements of the matrix : ", m*m);
    for(i = 0; i < m; i++)   
        for(j = 0; j < m; j++)   
            scanf("%d", &Arr[i][j]);

    for ( i=0; i<m; i++)
        sum = sum + Arr[i][i];
    
    printf ("Trace of the matrix = %d \n", sum);
}