#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertion_sort(int array[], int size){
    int temp, j;
    for(int i=0;i<size;i++){
        temp = array[i];
        j=i-1;
        while(array[j]>temp && j>=0){
            array[j+1] = array[j];
            j=j-1;
        }
        array[j+1]=temp;
    }
}

void cetakArray(int array[], int size){
    for(int i=0; i<size; ++i){
        printf("%d ",array[i]);
    }
    printf("\n");
}

int main(){
    int data[]= {23, 67, 89, 5, 45, 20, 15, 27};
    int size = sizeof(data)/sizeof(data[0]);
    insertion_sort(data, size);
    printf("Array Ascending :\n");
    cetakArray(data,size);
}
