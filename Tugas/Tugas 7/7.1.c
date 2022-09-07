#include <stdio.h>
#include <stdlib.h>

void main()
{
    int data[8]={7,8,4,2,9,3,1,6};
    //mencari panjang array
    int panjang = sizeof(data) / sizeof(*data);
    printf("isi dari array data adalah ");
    for(int i=0;i<panjang;i++){
        printf("%d ",data[i]);}
    //angka genap
    printf("\nangka genap dari array data adalah ");
    for(int i=0;i<panjang;i++){
        if(data[i]%2==0){printf("%d ",data[i]);}}
    //angka terbesar
    printf("\nangka terbesar yang ada di array data adalah ");
    int max=0;
    for(int i=0;i<panjang;i++){
        if(data[i]>max){max=data[i];}}
    printf("%d",max);
    //urut dari kecil
    printf("\nurutan angka dari yang terkecil adalah ");
    int min=0;
    for(int i=0;i<panjang;i++){
        for(int j=0;j<panjang;j++){
            int temp;
            if(data[i]<data[j]){
                temp=data[i];
                data[i]=data[j];
                data[j]=temp;}}}
    for(int i=0;i<panjang;i++){printf("%d ",data[i]);}
    //rata rata
    printf("\nNilai rata rata dari array data adalah ");
    float rata2;
    for(int i=0;i<panjang;i++){
        rata2+=data[i];}
    printf("%g",rata2/panjang);
    //nilai tengah
    printf("\nNilai tengah dari array data adalah ");
    float tengah;
    int total=panjang-1;
    tengah=(data[total/2]+data[total/2+1])/2;
    printf("%g",tengah);
}
