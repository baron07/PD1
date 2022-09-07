#include <stdio.h>
#include <stdlib.h>
#define MAX 46349
void main(){
    static int P[MAX];
    long int i,j;
    for(i=2;i<MAX;i++) {
            if(P[i]==0)
            for(j=i*i;j<MAX;j+=i) {
                P[j]=1;}
    }
    for(i=2;i<MAX;i++) {
            if(P[i]==0)
            printf("%8d",i);
    }
}

