#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

void main()
{
    int r;
    float keliling, luas;
    printf("Masukkan jari-jari lingkaran = ");
    scanf("%d",&r);
    keliling = 2 * pi * (float)r;
    luas = pi * (float)r * (float)r;
    printf("Keliling lingkaran dengan jari-jari %d adalah = %.2f\n",r,keliling);
    printf("Luas Lingkaran dengan jari-jari %d adalah = %.2f",r,luas);
}
