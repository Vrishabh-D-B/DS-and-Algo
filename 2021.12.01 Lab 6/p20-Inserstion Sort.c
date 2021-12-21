#include<stdio.h>
#define MAX 20
void insertionSort(int a[], int n){
    int i,j,key;
    for ( i = 1; i < n; i++){
        key = a[i];
        j = i;
        while(j >= 1 && a[j-1] > key){
            a[j] = a[j-1];
            j--;
        }
        a[j] = key;
    }
    
}
int main(){
    int arr[] = {25, 36, 12, 02, 78, 65, 55, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
    printf("Insertion Sort\n");
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