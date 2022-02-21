#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort (int array[], int size){
    for(int step=0; step < size-1; step++){
        int min_idx = step;
        for (int i = step+1; i<size; i++){
            if(array[i]<array[min_idx])
            min_idx = i;
        }
        swap(&array[min_idx],&array[step]);
    }
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
        array[j+1] = temp;
    }
}

void cetakArray(int array[], int size){
    for(int i=0; i<size; ++i){
        printf("%d ",array[i]);
    }
    printf("\n");
}

int main(){
    int menu, pilihan;
    int data[]= {23, 67, 89, 5, 45, 20, 15, 27};
    int size = sizeof(data)/sizeof(data[0]);
    menu:
    system ("cls");
    printf("Welcome to Ascending Program!\n");
    printf("1. Selection Sorting\n");
    printf("2. Insertion Sorting\n");
    printf("3. Exit\n");
    printf("Input your choice: ");
    scanf("%d", &pilihan);
    switch(pilihan){
        case 1 :system("cls");
                selection_sort(data, size);
                printf("Array Ascending Selection Sorting : \n");
                cetakArray(data,size);
                getch();
                goto menu;

        case 2 :system("cls");
                insertion_sort(data, size);
                printf("Array Ascending Insertion Sorting : \n");
                cetakArray(data,size);
                getch();
                goto menu;
        case 3 :system("cls");
                printf("Thank you\n");
                printf("Natania Desyderia-672021145\n");
                getch();
                exit(0);
    }
}
