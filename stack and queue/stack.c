#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX_STACK 5

typedef struct{
    int top;
    char data [5][5];
}STACK;

STACK tumpuk;

void inisialisasi(){
    tumpuk.top = -1;
}

int IsFull(){
    if(tumpuk.top == MAX_STACK -1)
        return 1;
    else
        return 0;
}

int IsEmpty(){
    if(tumpuk.top == -1)
        return 1;
    else
        return 0;
}

void Push(char d[5]){
    tumpuk.top++;
    strcpy(tumpuk.data[tumpuk.top], d);
}

void Pop(){
    printf("Data yang diambil = %s\n", tumpuk.data[tumpuk.top]);
    tumpuk.top--;
}

void TampilStack(){
    for(int i=tumpuk.top; i>=0; i--){
        printf("Data: %s\n", tumpuk.data[i]);
    }
}

void Bersihkan(){
    tumpuk.top=-1;
}

int stackkk(){
    int pilihan;
    inisialisasi();
    char dt[5];
    do{
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Cetak isi array stack!\n");
        printf("4. Hapus isi array stack!\n");
        printf("5. Keluar\n");
        printf("Pilihan Anda? ");
        scanf("%d", &pilihan);

        switch(pilihan){
            case 1: if(IsFull() != 1){
                        printf("Data yang ingin diinputkan = ");
                        scanf("%s", dt);
                        Push(dt);
                    }
                    else
                        printf("Stack sudah penuh!");
                    break;
            case 2: if(IsEmpty() != 1)
                        Pop();
                    else
                        printf("Stack masih kosong!\n");
                    break;
            case 3: if(IsEmpty() != 1)
                        TampilStack();
                    else
                        printf("\n Tidak ada data!");
                    break;
            case 4: Bersihkan();
                    printf("Data sudah dihapus\n");
                    break;
        }
        getch();
    }
    while (pilihan != 5);
        printf("Keluar program!\n");
        getch();
}
