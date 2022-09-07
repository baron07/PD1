#include <stdio.h>
#include <stdlib.h>
//Tugas 1.5.2
void main()
{
    system("cls");
    int cpu = 700000, ram = 380000, mobo = 800000;
    float diskon1 = 0.95, diskon2 = 0.9, diskon3 = 0.92;
    int total1, total2, total3, jumlah_harga;
    total1 = cpu * diskon1;
    total2 = ram * diskon2;
    total3 = mobo * diskon3;
    jumlah_harga = total1+total2+total3;
    printf("|NO|Nama Barang             |Harga   |Diskon|Harga setelah diskon|\n");
    printf("| 1|CPU 850 MHz             |%d,-|%s    |%d              |\n",cpu,"5%",total1);
    printf("| 2|RAM 128 MHz             |%d,-|%s   |%d              |\n",ram,"10%",total2);
    printf("| 3|Motherboard PIII 128 MHz|%d,-|%s    |%d              |\n",mobo,"8%",total3);
    printf("|Total Harga                                |%d             |",jumlah_harga);
}
