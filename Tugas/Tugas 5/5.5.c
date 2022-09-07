#include <stdio.h>
#include <stdlib.h>

void main(){
    int nilai,bagi,total;
    printf("Masukkan nilai maksimum: ");
    scanf("%d",&nilai);
    printf("Bilangan Prima dari 1 - %d adalah ",nilai);
    for(int i=2;i<=nilai;i++){
        total=0;
        for(bagi=1;bagi<=i;bagi++){
            if(i%bagi==0){total++;}
        }
        if(total==2){printf("%d ",i);}
    }
}
