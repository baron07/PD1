#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a, b, c, d, x, y, z;
    printf("Masukkan nilai A: ");scanf("%d",&a);
    printf("Masukkan nilai B: ");scanf("%d",&b);
    printf("Masukkan nilai C: ");scanf("%d",&c);
    printf("Masukkan nilai D: ");scanf("%d",&d);
    x = a > b ? a:b;
    y = c > d ? c:d;
    z = x > y ? x:y;
    printf("Nilai A lebih %s dari B \n",a>b ? "besar":"kecil");
    printf("Nilai C lebih %s dari D \n",c>d ? "besar":"kecil");
    printf("Jadi nilai maksimum adalah %d \n",z);
}
