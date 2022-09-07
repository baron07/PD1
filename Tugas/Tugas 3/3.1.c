#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a, b, c, d, e, f, g, h, i;
    printf("Masukkan nilai A: ");scanf("%d",&a);
    printf("Masukkan nilai B: ");scanf("%d",&b);
    printf("Masukkan nilai C: ");scanf("%d",&c);
    printf("Masukkan nilai D: ");scanf("%d",&d);
    e = (a > b)&&(c < d)||(a == b);
    f = (a == b)||(c == d)&&(a < b);
    g = (a <= c )&&( b >= d)||( a == d);
    h = (a >= d)||( b <= c)&&( c == d);
    i = (a != b)||(c > d)||(a != d);
    printf("Nilai dari (a > b) && (c < d) || (a == b) adalah %s \n",e ? "Benar(True)" : "Salah(False)");
    printf("Nilai dari (a == b)||(c == d)&&(a < b) adalah %s \n",f ? "Benar(True)" : "Salah(False)");
    printf("Nilai dari (a <= c )&&(b >= d)||(a == d) adalah %s \n",g ? "Benar(True)" : "Salah(False)");
    printf("Nilai dari (a <= c )&&(b >= d)||(a == d) adalah %s \n",h ? "Benar(True)" : "Salah(False)");
    printf("Nilai dari (a != b)||(c > d)||(a != d) adalah %s \n",i ? "Benar(True)" : "Salah(False)");
}
