#include <stdio.h>
#include <stdlib.h>

void main()
{
    int dd,mm,yy,kh;
    printf("Masukkan tanggal(dd-mm-yy): ");scanf("%d-%d-%d",&dd,&mm,&yy);
    printf("Tanggal diatas merupakan hari ");
    switch(mm){
        case 1:mm=1;break;
        case 2:mm=3;break;
        case 3:mm=4;break;
        case 4:mm=0;break;
        case 5:mm=2;break;
        case 6:mm=5;break;
        case 7:mm=0;break;
        case 8:mm=3;break;
        case 9:mm=6;break;
        case 10:mm=1;break;
        case 11:mm=4;break;
        case 12:mm=6;break;}
    kh=(dd+mm+yy+yy/4)%7;
    switch(kh){
        case 0:printf("Sabtu");break;
        case 1:printf("Minggu");break;
        case 2:printf("Senin");break;
        case 3:printf("Selasa");break;
        case 4:printf("Rabu");break;
        case 5:printf("Kamis");break;
        case 6:printf("Jumat");break;}
}
