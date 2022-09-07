#include <stdio.h>
#include <conio.h>
char asal,tujuan;
float nilai, s, d;
float suhu(s){
	switch(asal){
	    case'k':
            switch(tujuan){
                case'k':d=s;
                case'f':d=s;
                case'c':d=s;
                case'r':d=s;
            }
        case'f':;
        case'c':;
        case'r':;
	}
	return d;
}

int main(){
	printf("Masukkan suhu sumber(cth: 100 c): ");scanf("%f %c",&nilai,&asal);
	printf("Masukkan suhu tujuan(cth: r): ");getchar();scanf("%c",&tujuan);
	printf("Hasilnya adalah %g %c\n",suhu(nilai),toupper(tujuan));
}
