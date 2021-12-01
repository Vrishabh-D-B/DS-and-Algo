#include<stdio.h>
#define MAX 20
void insertionSort(int a[], int n){
    int i,j,key;
    for ( i = 0; i < n; i++){
        key = a[i];
        j = i;
        while(a[j-1] > key && j >= 1){
            a[j] = a[j-1];
            j--;
        }
        a[j] = key; 
    }
    
}
int main(){
    int arr[] = {25, 36, 12, 02, 78, 65, 55};
	int n = sizeof(arr)/sizeof(arr[0]);
    
    printf("Array : ");
    int i = 0;
    for(i = 0;i < n;i++)
        printf("%d ",arr[i]);
    printf("\n");

    insertionSort(arr, n);
    
    printf("Sorted Array : ");
    for(i = 0;i < n;i++)
        printf("%d ",arr[i]);
    printf("\n");

}