#include <stdio.h>
#include <stdlib.h>

long int factorial(int angka){
    int hasil=1;
    for(int i=1;i<=angka;i++){
        hasil=hasil*i;
    }return hasil;
}
void main(){
    int nilai;
    printf("Masukkan nilai: ");scanf("%d",&nilai);
    printf("faktorial dari %d adalah %1d",nilai,factorial(nilai));
}
