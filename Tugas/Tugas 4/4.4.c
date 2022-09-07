#include <stdio.h>
#include <stdlib.h>

void main()
{
    float a,b,c,d;
    double x1,x2;
    puts("Menghitung determinan dan mencari akar - akar dari persamaan kuadrat");
    printf("masukkan nilai A: ");
    scanf("%f",&a);
    printf("masukkan nilai B: ");
    scanf("%f",&b);
    printf("masukkan nilai C: ");
    scanf("%f",&c);
    d = b*b-4*a*c;
    printf("Nilai determinan adalah %g \n",d);
    if(d == 0){
        x1 = (-b)/2*a;
        printf("Dua akar real kembar yaitu x1 = x2 =%.2f",x1);
    }else if(d > 0){
        x1 = (-b+sqrt(d))/2*a;
        x2 = (-b-sqrt(d))/2*a;
        printf("Dua akar berlainan yaitu x1=%f dan x2=%.2f",x1,x2);
    }else if (d<0){
        x1 = (-b + sqrt(-d))/2*a;
        x2 = (-b - sqrt(-d))/2*a;
        printf("Akarnya x1=%.2fj dan x2=%.2fj\n",x1, x2);
    }
}
