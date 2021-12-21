#include <stdio.h>

void merge(int a[], int lb, int mid, int ub){
    int arrb[10], i, j, k;
    i = lb;
    j = mid + 1;
    k = lb;
    if(lb < ub){
        while(i <= mid && j <= ub){
            if(a[i] < a[j]){
                arrb[k] = a[i];
                k++; i++;
            }
            else{
                arrb[k] = a[j];
                k++; j++;
            }
        }
    }
    while(j <= ub){
        arrb[k] = a[j];
        j++; k++;
    }
    while(i <= mid){
        arrb[k] = a[i];
        i++; k++;
    }
    for(k = lb;k <= ub;k++)
        a[k] = arrb[k];
}

void mergeSort(int a[], int lb, int ub){
    int mid = (lb + ub)/2;
    mergeSort(a, lb, mid);
    mergeSort(a, mid + 1, ub);
    merge(a, lb, mid, ub);
}

int main() {
    int arr[10], i;
  
    printf("Merge Sort\n");
    printf("Enter 10 numbers: ");
    for(i = 0; i < 10; i++) 
        scanf("%d", &arr[i]);
  
    mergeSort(arr, 0, 9);

    printf("After Sort : ");
    for(i = 0; i < 10; i++) 
        printf("%d ", arr[i]);
  
  
    return 0;
}