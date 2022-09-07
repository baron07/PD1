#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int bil1=2,bil2=1,bil3=1;
    int hasil1,hasil2,hasil3;
    int pangkat1=1,pangkat2=2,pangkat3=3;
    for(int x=0;x<5;x++){
        hasil1=pow(bil1,pangkat1);
        printf("%4d",hasil1);
        pangkat1++;
    }
    printf("\n");
    for(int x=0;x<5;x++){
        hasil2=pow(bil2,pangkat2);
        printf("%4d",hasil2);
        bil2++;
    }
    printf("\n");
    for(int x=0;x<5;x++){
        hasil3=pow(bil3,pangkat3);
        printf("%4d",hasil3);
        bil3++;
    }
}
