#include <stdio.h>

int selectionSort(int arr[], int n){
    int i, j, posisi, swap;
    for(i=0;i<(n-1);i++){
        posisi = i;
        for (j = i + 1; j < n; j++){
            if(arr[posisi] > arr[j]){
                posisi = j;
            }
        }
        if(posisi != i){
            swap=arr[i];
            arr[i]=arr[posisi];
            arr[posisi]=swap;
        }
    }
}

int main(){
    int arr[64], n, i, j;
    printf("Enter number of elemnets:\n");
    scanf("%d", &n);
    printf("\nEnter %d integers:\n", n);
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    selectionSort(arr, n);
    printf("Array Ascending Selection Sorting:\n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
