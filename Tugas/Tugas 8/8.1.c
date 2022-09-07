#include <stdio.h>
#include <stdlib.h>
//8.1
char kalimat[]="Salah orang";
strsisip(var,str,angka){
    for(int i=0;i<strlen(var);i++){
        if(i==angka){printf("%s",str);}
        printf("%c",kalimat[i]);}
}
void main(){
    printf("Kalimat sebelum disisipkan: %s", kalimat);
    printf("\nKalimat setelah disisipkan: ");
    strsisip(kalimat,"se",6);
}
