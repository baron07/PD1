#include <stdio.h>
#include <stdlib.h>

int kabisat(int tahun){
    if(tahun%4==0){
        if(tahun%100==0){
            if(tahun%400==0){return 1;}
            else{return 0;}}
        else{return 1;}}
    else{return 0;}}
void main(){
    int tahun;
    printf("Masukkan tahun: ");scanf("%d",&tahun);
    printf("Tahun %d adalah %d\n",tahun,kabisat(tahun));
}
