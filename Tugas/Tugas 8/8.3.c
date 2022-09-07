#include <stdio.h>
#include <stdlib.h>
//8.3
void main(){
    char kalimat[100];
    int kecil=0,besar=0,angka=0,tanda=0;
    puts("Program penghitung jumlah huruf kecil, huruf besar, angka numerik, dan tanda baca");
    printf("Masukkan Kalimat: ");fgets(kalimat,sizeof kalimat,stdin);
    for(int i =0;i<strlen(kalimat);i++){
        if(kalimat[i]>='a'&&kalimat[i]<='z'){kecil++;}
        else if(kalimat[i]>='A'&&kalimat[i]<='Z'){besar++;}
        else if(kalimat[i]>='0'&&kalimat[i]<='9'){angka++;}
        else{tanda++;}
    }tanda--;
    printf("Jumlah huruf kecil yang ada dalam string adalah %d\n",kecil);
    printf("Jumlah hurur kapital yang ada dalam string adalah %d\n",besar);
    printf("Jumlah angka yang ada dalam string adalah %d\n",angka);
    printf("Jumlah tanda baca yabg ada dalam string adalah %d\n",tanda);
}
