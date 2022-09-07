#include <stdio.h>
void main()
{
    float h_cpu, h_ram, h_board;
    float harga_cpu, harga_ram, harga_board;
    h_cpu=2125000;
    h_ram=950000;
    h_board=1100000;
    harga_cpu = h_cpu - h_cpu * 0.15;
    harga_ram = h_ram - h_ram * 0.05;
    harga_board= h_board - h_board * 0.08;
    printf("no\tNama Barang\t\tHarga Barang\tDiskon\tHarga Total \n");
    printf("1.\tIntel Core I7 4770\t%.2f\t15%%\t%.2f \n",h_cpu,harga_cpu);
    printf("2.\tRAM DDR4 8GB 2666 Mhz\t%.2f\t5%%\t%.2f \n",h_ram,harga_ram);
    printf("3.\tMotherboard H410 ASUS\t%.2f\t8%%\t%.2f \n",h_board,harga_board);
}
