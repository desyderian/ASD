#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int array[], int size){
    int i, j, temp;
    for(i = 0; i < size; i++){
        for(j=0; j < size-i-1; j ++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
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
    bubbleSort(data, size);
    printf("Array Ascending :\n");
    cetakArray(data,size);
}
