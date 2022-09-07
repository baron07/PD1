#include <stdio.h>
#include <time.h>
#include <Windows.h>
int main(){
    int angka1;
    register int angka2;
    printf("Masukkan berapa kali looping: ");
    scanf("%d",&angka1);
    angka2=angka1;

    //diawal looping:
    unsigned int akhir = 0;
    unsigned int awal = 0;
    akhir = GetTickCount();
    for(int i=0;i<=angka2;i++){
        printf("X");
    }
    //diakhir looping:
    awal = GetTickCount();

    //diawal looping:
    unsigned int Last = 0;
    unsigned int Now = 0;
    Last = GetTickCount();
    for(int i=0;i<=angka1;i++){
        printf("Y");
    }
    //diakhir looping:
    Now = GetTickCount();
    printf("\nFungsi int dengan loop sebanyak %d kali membutuhkan waktu: %i ms\n",angka1,(Now-Last));
    printf("\nFungsi register int dengan loop sebanyak %d kali membutuhkan waktu: %i ms\n",angka2,(awal-akhir));
}
