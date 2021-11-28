#include <stdio.h>
#include <stdlib.h>
 
#define R1 3            
#define C1 3            
#define R2 3            
#define C2 3            
 
// void mulMat(int mat1[][C1], int mat2[][C2]) {
    
// }
 
void main() 
{
    int mat1[R1][C1];
    int mat2[R2][C2];
    int rslt[R1][C2];
    int i,j,k;

    printf("Enter the %d elements of the first matrix : ", R1*C1);
    for(i = 0; i < R1; i++)   
        for(j = 0; j < C1; j++)   
            scanf("%d", &mat1[i][j]);

    printf("Enter the %d elements of the second matrix : ", R2*C2);
    for(i = 0; i < R2; i++)   
        for(j = 0; j < C2; j++)   
            scanf("%d", &mat2[i][j]);
 
    if (C1 != R2) {
        printf("The number of columns in Matrix-1  must be equal to the number of rows in Matrix-2\nTRY AGAIN\n");
        exit(EXIT_FAILURE);
    }
 
    printf("Multiplication of given two matrices is:\n\n");
 
    for (i = 0; i < R1; i++) {
        for (j = 0; j < C2; j++) {
            rslt[i][j] = 0;
 
            for (k = 0; k < R2; k++) {
                rslt[i][j] += mat1[i][k] * mat2[k][j];
            }
 
            printf("%d\t", rslt[i][j]);
        }
        printf("\n");
    }   
}
 