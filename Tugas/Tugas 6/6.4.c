#include <stdio.h>
#include<conio.h>
char asal,tujuan;
float nilai;
float suhu(float s){
	float d=0;
	if(tolower(asal)=='c'){
		if(tolower(tujuan)=='c'){d=s;}
		else if(tolower(tujuan)=='f'){d=s*9/5+32;}
		else if(tolower(tujuan)=='r'){d=s*4/5;}
		else if(tolower(tujuan)=='k'){d=s+273;}
	}
	else if(tolower(asal)=='f'){
		if(tolower(tujuan)=='c'){d=(s-32)*5/9;}
		else if(tolower(tujuan)=='f'){d=s;}
		else if(tolower(tujuan)=='r'){d=(s-32)*4/9;}
		else if(tolower(tujuan)=='k'){d=((s-32)*5/9)+273;}
	}
	else if(tolower(asal)=='r'){
		if(tolower(tujuan)=='c'){d=s*5/4;}
		else if(tolower(tujuan)=='f'){d=s*9/4+32;}
		else if(tolower(tujuan)=='r'){d=s;}
		else if(tolower(tujuan)=='k'){d=s*5/4+273;}
	}
	else if(tolower(asal)=='k'){
		if(tolower(tujuan)=='c'){d=s-273;}
		else if(tolower(tujuan)=='f'){d=(s-273)*9/5+32;}
		else if(tolower(tujuan)=='r'){d=(s-273)*4/5;}
		else if(tolower(tujuan)=='k'){d=s;}
	}
	else{return 0;}
	return d;
}
int main(){
	printf("Masukkan suhu sumber(cth: 100 c): ");
	scanf("%f %c",&nilai,&asal);
	printf("Masukkan suhu tujuan(cth: r): ");
	getchar();scanf("%c",&tujuan);
	printf("\nHasilnya adalah %g %c\n",suhu(nilai),toupper(tujuan));
}
