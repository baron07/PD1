#include <stdio.h>
#include <stdlib.h>

void main()
{
    int fahrenheit, celcius;
    printf("Masukkan derajat Fahrenheit = ");
    scanf("%d",&fahrenheit);
    celcius = 5 * (fahrenheit - 32) / 9;
    printf("%d derajat Fahrenheit adalah = %d derajat Celcius",fahrenheit, celcius);
}
