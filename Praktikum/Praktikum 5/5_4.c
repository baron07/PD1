#include <stdio.h>
#include <stdlib.h>
//tugas 5.5.4
void main(){
    int celcius=0, fahrenheit, reamur, kelvin;
    printf("N0\tCelcius\tFahrenheit\tReamur\tKelvin\n");
    for(int i=1;i<=11;i++){
        printf("%d\t",i);
        printf("%d\t",celcius);
        fahrenheit=9*celcius/5+32;
        printf("%d\t\t",fahrenheit);
        reamur=4*celcius/5;
        printf("%d\t",reamur);
        kelvin=celcius+273;
        printf("%d\t",kelvin);
        printf("\n");celcius+=10;
    }
}
