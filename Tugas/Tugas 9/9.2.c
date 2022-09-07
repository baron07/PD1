#include <stdio.h>
#include <stdlib.h>

void main(){
    char data[12][12];
    char *p=&data;
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            data[i][j]='X';}
    }
    puts("Isi dari array adalah");
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            printf("%c ",*p++);
        }printf("\n");
    }
}
