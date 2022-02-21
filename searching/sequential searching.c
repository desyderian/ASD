#include<stdio.h>

int main(){
    int a, b, Data[10], cari, jumlah=0;
    printf("Jumlah data yang akan diinput : ");
    scanf("%d", &a);
    printf("Masukkan %d integer(s) \n", a);
    for(b=0; b<a; b++)
        scanf("%d", &Data[b]);
    printf("Angka yang ingin dicari : ");
    scanf("%d", &cari);
    for(b=0; b<a; b++){
        if(Data[b]==cari){
            printf("\nAngka %d KETEMU di lokasi/indeks %d", cari, b+1);
            jumlah++;
        }
    }
        if(jumlah==0){
            printf("\nAngka %d TIDAK DITEMUKAN", cari);
        }
        else{
            printf("\n\nAngka %d ditemukan sebanyak %d kali dalam array\n",cari, jumlah);
        }

   return 0;
}
