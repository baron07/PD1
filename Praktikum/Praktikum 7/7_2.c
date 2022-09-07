#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 6000
void main(){
    static int P[MAX];
    long int i,j;
    //diawal looping:
    unsigned int Last_int = 0;
	unsigned int Now_int = 0;
	Last_int = GetTickCount();
    for(i=2;i<MAX;i++) {
            if(P[i]==0)
            for(j=i*i;j<=MAX;j+=i){
                P[j]=1;}
    }
    for(i=2;i<MAX;i++) {
            if(P[i]==0)
            printf("%8d",i);
    }
    //diakhir looping:
    Now_int = GetTickCount();
    printf("\nFungsi prima membutuhkan waktu: %i ms\n",(Now_int-Last_int));
}

