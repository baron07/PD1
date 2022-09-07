#include <stdio.h>
#include <stdlib.h>

void main()
{
    int angka,hasil,sisa;
    printf("Masukkan bilangan: ");
    scanf("%d",&angka);hasil=angka;
    do{
        sisa=hasil%2;
        hasil=hasil/2;
        printf("%d / 2 = %d sisa %d \n",angka,hasil,sisa);
        angka=hasil;
    }while(hasil>0);
}
