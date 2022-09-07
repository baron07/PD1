#include <stdio.h>
#include <stdlib.h>

void main(){
    int n,isi,a;
    printf("Masukkan jumlah data: ");scanf("%d",&n);
    int data[n];
    for(int i=0;i<n;i++){
        int j=i+1;
        printf("Masukkan jumlah data ke-%d: ",j);scanf("%d",&a);
        data[i]=a;}
    int panjang = sizeof(data) / sizeof(*data);
    //pengurut array
    for(int i=0;i<panjang;i++){
        for(int j=0;j<panjang;j++){
            int temp;
            if(data[i]<data[j]){
                temp=data[i];
                data[i]=data[j];
                data[j]=temp;}}}
    printf("Nilai array setelah diurutkan\n");
    for(int i=0;i<panjang;i++){printf("%d ",data[i]);}
}
