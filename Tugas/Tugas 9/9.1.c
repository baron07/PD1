#include <stdio.h>
#include <stdlib.h>

void main(){
    float bil[12];
    float *p1 = &bil;
    for(int i=0;i<12;i++){
        float x =(float)rand()/((float)rand());
        bil[i]= x;}
    puts("Sebelum diurutkan");
    for(int i=0;i<12;i++){
        printf("%f ",p1[i]);
    }
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            if(p1[i]<p1[j]){
                float a = p1[i];
                p1[i] = p1[j];
                p1[j] = a;}
        }
    }
    puts("\nSetelah diurutkan dicetak menggunakan pointer");
    for(int i=0;i<12;i++){
        printf("%f ",*p1++);
    }
    puts("\nSetelah diurutkan dicetak menggunakan index array");
    for(int i=0;i<12;i++){
        printf("%f ",bil[i]);
    }
    puts("\nSetelah diurutkan dicetak menggunakan index pointer");
    for(int i=0;i<12;i++){
        printf("%f ",*(bil+i));
    }
}
