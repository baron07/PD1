#include <stdio.h>
#include <stdlib.h>

char kapital(char *str){
    for(int i=0;i<strlen(str);i++){
        if(i==0){
            printf("%c",toupper(str[i]));}
        else{
            printf("%c",str[i]);}
        if(str[i]==' '){
            str[i+1] = toupper(str[i+1]);}
    }
}
int main(){
    char kalimat[100];
    char *pk=&kalimat;
    int kata=1;
    printf("Masukkan kalimat: ");fgets(kalimat, sizeof kalimat, stdin);
    for(int i=0;i<*pk;i++){
        if(pk[i]==' '){
            kata++;
            if(pk[i+1]>='0' && pk[i+1]<='9'){
                kata--;}
            }

    }
    printf("Jumlah kata sebanyak %d kata\n",kata);
    printf("Huruf pertama setiap setelah di rubah menjadi kapital:\n");
    kapital(pk);
}
