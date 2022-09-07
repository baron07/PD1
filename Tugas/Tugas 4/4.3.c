#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tahun;
    printf("Pemeriksa tahun kabisat \n");
    printf("Masukkan tahun antara 1600 - 2400: ");
    scanf("%d",&tahun);
    if(tahun < 1600 || tahun > 2400){
        printf("Tahun yang anda masukkan salah");
    }else{
        if(tahun%4==0){
            if(tahun%100==0){
                if(tahun%400==0){
                    printf("%d merupakan Tahun Kabisat",tahun);
                }else{
                    printf("%d bukan Tahun Kabisat",tahun);
                }
            }else{
                printf("%d merupakan Tahun Kabisat",tahun);
            }
        }else{
            printf("%d bukan Tahun Kabisat",tahun);
        }
    }
}
