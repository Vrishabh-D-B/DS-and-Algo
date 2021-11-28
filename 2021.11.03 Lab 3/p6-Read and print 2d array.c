#define Row 3
#define Column 3

#include<stdio.h>
int main(){
   
   int Arr[Row][Column];
   
   int i, j;
   printf("Enter the %d elements of the matrix : ", Row*Column);
    for(i = 0; i < Row; i++)   
        for(j = 0; j < Column; j++)   
            scanf("%d", &Arr[i][j]);
  
   printf("Two Dimensional array elements:\n");
   for(i=0; i<Row; i++) {
      for(j=0;j<Column;j++) {
         printf("%d ", Arr[i][j]);
         if(j==Row-1){
            printf("\n");
         }
      }
   }
   return 0;
}