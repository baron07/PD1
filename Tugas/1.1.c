#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
void main()
{
    float r = 7.00, T = 10.00;
    int a = 1, b = 8, c = 12;
    float l_tabung, v_tabung, v_bola;
    int y1, y2;
    l_tabung = 2*PI*r*T + 2*PI*r*r;
    v_tabung = PI*r*r*T;
    v_bola = PI*pow(r,3)*4/3;
    y1 = (-b+sqrt(b*b-4*a*c))/2*a;
    y2 = (-b-sqrt(b*b-4*a*c))/2*a;
    printf("Luas tabung dengan jari jari %.2f dan tinggi %.2f adalah %.2f \n", r, T, l_tabung);
    printf("Volume Tabung dengan jari jari %.2f dan tinggi %.2f adalah %.2f \n", r, T, v_tabung);
    printf("Volume Bola dengan jari jari %.2f adalah %.2f \n", r, v_bola);
    printf("Persamaan kuadrat dengan a = %i, b = %i, dan c = %i adalah x1 = %i x2 = %i \n", a, b, c, y1, y2);
}
