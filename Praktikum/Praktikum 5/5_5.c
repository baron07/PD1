#include <stdio.h>
#include <stdlib.h>
//tugas 5.5.5
int main(){
    int n,rata2=0,nilai;
    printf("Masukkan banyaknya data nilai = ");scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("Masukkan data nilai ke-%d = ",i);scanf("%d",&nilai);
        rata2+=nilai;
    }
    printf("Jumlah seluruh nilai adalah = %d\n",rata2);
    rata2=rata2/n;
    printf("Nilai rata-rata nya adalah = %d",rata2);
}
