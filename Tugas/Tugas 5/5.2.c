#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int bil1=1,bil2=2,bil3=3,bil4=4,bil5=5;
    int hasil1,hasil2,hasil3,hasil4;
    int pangkat=1;
    for(int z=0;z<5;z++){
        hasil1=pow(bil2,pangkat);
        hasil2=pow(bil3,pangkat);
        hasil3=pow(bil4,pangkat);
        hasil4=pow(bil5,pangkat);
        printf("%4d|%4d|%4d|%4d|%4d|\n",bil1,hasil1,hasil2,hasil3,hasil4);
        pangkat++;
    }
}
