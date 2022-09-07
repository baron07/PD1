#include <stdio.h>
#include <stdlib.h>
//8.4
void main(){
    char kalimat[100];
    printf("Masukkan kalimat: ");fgets(kalimat,sizeof kalimat,stdin);
    int spasi=strlen(kalimat),huruf=0;
    for(int i=0;i<strlen(kalimat);i++){
        for(int j=0;j<spasi;j++){
            printf(" ");}
        for(int k=0;k<huruf;k++){
            printf("%c ",kalimat[k]);}
            printf("\n");
            spasi--;
            huruf++;
    }
}
