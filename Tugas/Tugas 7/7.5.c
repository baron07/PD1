#include <stdio.h>
#include <stdlib.h>

void main()
{
    int dd,mm,yy,kh;
    static int kode_bulan[12] = {1,4,4,0,2,5,0,3,6,1,4,6};
    static char kode_hari[7][10] ={"sabtu","minggu","senin","selasa","rabu","kamis","jum'at"};
    printf("Masukkan tanggal(dd-mm-yy): ");scanf("%d-%d-%d",&dd,&mm,&yy);
    printf("Tanggal diatas merupakan hari ");
    kh=(dd+kode_bulan[mm-1]+yy+yy/4)%7;
    printf("%s",kode_hari[kh]);
}
