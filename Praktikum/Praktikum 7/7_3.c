#include <stdio.h>
#include <stdlib.h>

void main(){
    int mhs[4][4]={
        {1,81,90,62},
        {2,50,83,87},
        {3,89,55,65},
        {4,77,70,92}
    };
    int panjang = sizeof(mhs) / sizeof(*mhs);

    printf("No. mhs\tRata-rata");
    printf("\n-----------------");
    for(int i=0;i<panjang;i++){
        printf("\n%d\t",mhs[i][0]);
        float rata2,hasil;
        for(int j=1;j<panjang;j++){
            rata2=rata2+=mhs[i][j];}
        hasil=rata2/(panjang-1);
        printf("%.2f",hasil);
        rata2=0;}
    printf("\n-----------------");
}
