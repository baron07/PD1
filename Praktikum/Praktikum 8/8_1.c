#include <stdio.h>
#include <stdlib.h>
//8.1
char kalimat[100];kata[100];
char strsisip(var,str,angka){
    for(int i=0;i<strlen(var);i++){
        if(i==angka){printf("%s",str);}
        printf("%c",kalimat[i]);}
}
void main(){
    int angka;
    printf("Masukkan kalimat: ");fgets(kalimat,sizeof kalimat,stdin);
    printf("Masukkan kata: ");gets(kata);
    printf("Disisipkan ke urutan: ");scanf("%d",&angka);
    printf("Kalimat sebelum disisipkan: %s", kalimat);
    printf("Kalimat setelah disisipkan: ");
    strsisip(kalimat,kata,angka);
}
