#include <stdio.h>
#include <stdlib.h>
//tugas 5.5.7
void main(){
    int angka=10,hasil=1,i,j;
    for(i=1;i<=10;i++){
        printf("%d! = ",i);
        for(j=1;j<=i;j++){
            if(j==i){printf("%d = ",j);}
            else{printf("%dx",j);}
            hasil=hasil*j;
        }
        printf("%d\n",hasil);
        hasil=1;
    }
}
