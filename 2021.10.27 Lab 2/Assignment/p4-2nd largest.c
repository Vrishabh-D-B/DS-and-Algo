#define NUM 5

#include <stdio.h>

int main() 
{
   int i, arr[NUM];
   int largest, second;
    
    printf("Enter %d values for arr : ",NUM);
    for(i=0;i<NUM;i++)
        scanf("%d",&arr[i]);
   

   if(arr[0] > arr[1]) {
      largest = arr[0];
      second  = arr[1];
   } else {
      largest = arr[1];
      second  = arr[0];
   }

   for(i = 2; i < NUM; i++) {
      if( largest < arr[i] ) {
         second = largest;
         largest = arr[i];
      } else if( second < arr[i] ) {
         second =  arr[i];
      }
   }

   printf("Second Largest:- %d \n", second);   

   return 0;
}