#include <stdio.h>
#include <stdlib.h>
//tugas 5.5.8
void main(){
    int n,max=0,min=9999,data;
    float jumlah=0;
    printf("Masukkan jumlah data: ");scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("Masukkan data ke-%d = ",i);
        scanf("%d",&data);
        jumlah+=data;
        if(data>max){max=data;}
        if(data<min){min=data;}
    }
    printf("Nilai maximalnya adalah %d\n",max);
    printf("Nilai minimalnya adalah %d\n",min);
    jumlah/=n;
    printf("Nilai rata-ratanya adalah %g",jumlah);
}
