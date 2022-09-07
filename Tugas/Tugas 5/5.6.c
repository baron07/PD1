#include <stdio.h>
#include <math.h>

void main(){
	float bil, x, hasil=0;
    printf("Masukkan Bilangan = ");
    scanf("%f",&bil);
    x=bil/2;
    do {
        hasil=x;
        x=(x + bil/x)/2;
        printf("Akar=(%.2f+%.2f/%.2f)/2=%.2f \n",x,bil,x,hasil);
        }while (x!=hasil);
}
