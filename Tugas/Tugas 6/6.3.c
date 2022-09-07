#include <stdio.h>
#include <stdlib.h>
int n,r,hasil;
int faktorial(n){
    int faktorial1=1;
    for(int i=1;i<=n;i++){
        faktorial1=faktorial1*i;
    }return faktorial1;
}
int permutasi(n,r){
    hasil=faktorial(n)/faktorial(n-r);
    return hasil;
}
int kombinasi(n,r){
    hasil=faktorial(n)/(faktorial(r)*faktorial(n-r));
    return hasil;
}
void main(){
    printf("Masukkan nilai(cth:2 1): ");scanf("%d %d",&n,&r);
    printf("nilai permutasi dari %d dan %d adalah %d\n",n,r,permutasi(n,r));
    printf("nilai kombinasi dari %d dan %d adalah %d\n",n,r,kombinasi(n,r));
}
