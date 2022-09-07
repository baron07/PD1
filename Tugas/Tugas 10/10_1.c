#include <stdio.h>
#include <stdlib.h>

struct kalender{
    int tgl;
    int bln;
    int thn;
};

void besok(struct kalender next){
        if((next.tgl==31&&(next.bln==1||next.bln==3||next.bln==5||next.bln==7||next.bln==8||next.bln==10))
           ||(next.tgl==30&&(next.bln==4||next.bln==6||next.bln==9||next.bln==11))){
            next.tgl=1;
            next.bln++;
        }else if(next.tgl==31&&next.bln==12){
            next.tgl=1;
            next.bln=1;
            next.thn++;
        }else if(next.bln==2){
            if(next.thn%400==0||next.thn%100!=0&&next.thn%4==0){
                if(next.tgl==29){
                    next.tgl=1;
                    next.bln++;
                }else{
                    next.tgl++;}
            }else if(next.tgl==28){
                next.tgl=1;
                next.bln++;
            }else{
                    next.tgl++;}
        }else{
            next.tgl++;
        }
    printf("\nBesok tanggal: %02d-%02d-%02d",next.tgl,next.bln,next.thn);
}
void main(){
    struct kalender hari;
    printf("Masukkan tanggal hari ini(DD-MM-YYYY): ");
    scanf("%d-%d-%d",&hari.tgl,&hari.bln,&hari.thn);
    printf("Hari ini Tanggal: %02d-%02d-%02d",hari.tgl,hari.bln,hari.thn);
    besok(hari);
}
