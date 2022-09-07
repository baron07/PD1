#include <stdio.h>
#include <stdlib.h>
//tugas 5.5.1
void main(){
    int kolom=1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(kolom==i){printf("1 ");}
            else{printf("0 ");}
            kolom++;}
        printf("\n");
        kolom=1;
    }
}
