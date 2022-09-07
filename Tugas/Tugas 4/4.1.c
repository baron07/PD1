#include <stdio.h>
#include <stdlib.h>

void main()
{
    int angka;
    printf("Masukkan angka yang ingin diketahui ganjil genap: ");
    scanf("%d",&angka);
    if(angka%2 == 0){
        printf("Angka %d adalah angka Genap",angka);
    }else{
        printf("Angka %d adalah angka Ganjil",angka);
    }
}
