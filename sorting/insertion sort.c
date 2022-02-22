#include <stdio.h>

int main(){
    int array[100], n, i, j, swap;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("\nEnter %d integers :\n", n);
    for(i=0;i<n;i++)
    scanf("%d", &array[i]);
    for(i=1;i<=n-1;i++){
        for(j=i;j>0&&array[j-1]>array[j];j--){
            swap = array[j];
            array[j] = array[j-1];
            array[j-1] = swap;
        }
    }
    printf("\nArray Ascending Insertion Sorting: \n");
    for(i=0;i<n;i++){
        printf("%d\t", array[i]);
    }
    printf("\n");
    return 0;
}
