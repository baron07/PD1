#include <stdio.h>
#include <stdlib.h>
struct waktu{
    int det;
    int mnt;
    int jam;
};

void main(){
    struct waktu w1,w2;
    printf("Masukkan waktu 1(jj:mm:dd):");
	scanf("%d:%d:%d",&w1.jam,&w1.mnt,&w1.det);
    printf("Masukkan waktu 2(jj:mm:dd):");
	scanf("%d:%d:%d",&w2.jam,&w2.mnt,&w2.det);
    w2.det-=w1.det;
    if(w2.det<0){
        w2.det+=60;
        w2.mnt--;}
    w2.mnt-=w1.mnt;
    if(w2.mnt<0){
        w2.mnt+=60;
        w2.jam--;}
    w2.jam-=w1.jam;
    printf("Selisih Waktu = %d jam %d menit %d detik",w2.jam,w2.mnt,w2.det);
}
