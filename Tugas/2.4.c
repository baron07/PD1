#include <stdio.h>
#include <stdlib.h>

void main()
{
    int jam, menit, total;
    printf("Program konversi jam ke menit\n");
    printf("Masukkan jam dan menit (jj:mm)= ");
    scanf("%d:%d",&jam,&menit);
    total = menit + jam * 60;
    printf("Jam %d:%02d adalah setara dengan %d menit",jam,menit,total);
}
