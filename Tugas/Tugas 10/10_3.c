#include <stdio.h>
#include <stdlib.h>
struct sh{
    int hh;
    int bb;
    int th;
};
void main(){
    struct sh t1,t2;
    int hasil=1;
    printf("Masukkan tanggal 1(HH-BB-TTTT):");
	scanf("%d-%d-%d",&t1.hh,&t1.bb,&t1.th);
    printf("Masukkan tanggal 2(HH-BB-TTTT):");
	scanf("%d-%d-%d",&t2.hh,&t2.bb,&t2.th);
    while((t1.hh!=t2.hh)||(t1.bb!=t2.bb)||(t1.th!=t2.th)){
        hasil++;
        if(t1.bb==4||t1.bb==6||t1.bb==9||t1.bb==11){
            if(t1.hh==30){
                t1.hh=1;
                t1.bb++;
                continue;}
        }else if(t1.bb==2){
            if(t1.th%400==0||t1.th%100!=0&&t1.th%4==0){
                if(t1.hh==29){
                    t1.hh=1;
                    t1.bb++;
                    continue;}
            }else if(t1.hh==28){
                t1.hh=1;
                t1.bb++;
                continue;}
        }else if(t1.bb==12&&t1.hh==31){
            t1.hh=0;
            t1.bb=1;
            t1.th++;
        }else{
            if(t1.hh==31){
                t1.hh=1;
                t1.bb++;
                continue;}}
        t1.hh++;}
    printf("selisih tanggal %d hari",hasil-1);
}
