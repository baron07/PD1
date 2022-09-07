#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a=7, b=9, c=5, d=3;
    int m, n, hasil;
    m = (a>b) ? a: b;
    n = (c<d) ? d: c;
    hasil= (m>n) ? m:n;
    printf("Hasil m adalah %d \n",m);
    printf("Hasil n adalah %d \n",n);
    printf("Hasilnya adalah %d",hasil);
}
