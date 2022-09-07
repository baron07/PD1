# include <stdio.h>
# include <conio.h>
void main(){
    static int ajaib[1000][1000];
    int max,ordo,baris,angka,kolom;
    ulangi:
        printf("masukkan ordo: ");scanf("%d", &ordo);
        if(ordo>=3 & ordo<=19){
            if(ordo%2==0){
                printf("ordo harus ganjil\n");
                goto ulangi;}}
        else{
            printf("masukkan ordo antara 3-19\n");
            goto ulangi;}
    kolom=ordo/2;
    baris=0;
    max=ordo*ordo;
    for(int angka=1; angka<=max; angka++){
        ajaib[baris][kolom]=angka;
        kolom++;
        if(angka%ordo==0){
            baris += 1;
            kolom--;}
        else{baris--;}
        if(baris<0){
            baris=ordo-1;}
        if(kolom>=ordo){
                kolom=0;}}
    for(int i=0;i<ordo;i++){
            printf ("\n");
            for (int k=0;k<ordo;k++){
                    printf("%d\t",ajaib[i][k]);}}
    puts("\n");
}
