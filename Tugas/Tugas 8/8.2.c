#include <stdio.h>
#include <stdlib.h>
//8.2
void main(){
    char str1[50], str2[50];
    int hasil;
    puts("Program Palindrom");
    printf("Masukkan kalimat: ");gets(str1);
    strcpy(str2,str1);
    strrev(str2);
    if(strcmp(str1, str2)==0){
        printf("Kalimat %s merupakan Palindrom\n",str1);
    }else{
        printf("Kalimat %s bukan Palindrom\n",str1);
    }
}
//harum semar kayak rames murah
