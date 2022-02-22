#include <stdio.h>

int main(){
    int swap(int *a, int *b){
    int temp1=*a;
    *a=*b;
    *b=temp1;}
    int n, i, j, temp2;
    int arr[64];
    printf("Enter number of elements:\n");
    scanf("%d", &n);
    printf("\nEnter %d integers\n", n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0;i<n;i++){
         for(j=0; j < n-i-1; j ++){
            if(arr[j]>arr[j+1]){
                temp2=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp2;
            }
        }
    }
    printf("\nArray Ascending Bubble Sorting:\n");
    for(i=0; i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
