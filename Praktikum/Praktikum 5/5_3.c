#include <stdio.h>
#include <stdlib.h>
//tugas 5.5.3
void main(){
    int bil, balik=0, hasil;
    printf("Masukkan bilangan bulat: ");
    scanf("%d", &bil);
    while(bil!=0){
        hasil=bil%10;
        balik=balik*10+hasil;
        bil/=10;
        }
    printf("Hasil setelah dibalik: %d",balik);
}
