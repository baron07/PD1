#include <stdio.h>
#include <stdlib.h>
int nilai;
int prima(int angka){
    int total=0;
    for(int j=1;j<=angka;j++){
        if(angka%j==0){
            total++;
        }
    }
    if(total==2){
        return printf("(1) Prima");
    }else{
        return printf("(0) Bukan prima");
    }
}
void main(){
    printf("Masukkan angka: ");scanf("%d",&nilai);
    printf("Bilangan %d merupakan ",nilai);
    prima(nilai);
}
