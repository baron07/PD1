#include <stdio.h>
#include <stdlib.h>
//tugas 5.5.6
void main(){
    int angka, b, hasil=0,balik=0;
    char ulangi = 'y';
    while(ulangi=='y'|ulangi=='Y'){
        printf("Masukkan bilangan : ");
        scanf("%d",&angka);
        printf("Jumlah angka dalam bilangan %d adalah ",angka);
        while(angka != 0){
                b=angka%10;
                balik=balik*10+b;
                hasil=hasil+b;
                angka=angka/=10;
            }
        while(balik != 0){
            b=balik%10;
            if(balik<10){
                printf("%d = ",balik);
            }else{
                printf("%d + ",b);
            }balik=balik/=10;
        }
        printf("%d\n",hasil);
        printf("Coba lagi?(y/n) \n");
        scanf(" %c", &ulangi);
        hasil=0;
    }
}
