#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main(){
	int i,j,k; int *c;
	static int data_huruf[5][8][8]={
		{
		{0,1,1,1,1,1,0,0},
		{0,1,0,0,0,1,0,0},
		{0,1,0,0,0,1,0,0},
		{1,1,1,1,1,1,1,0},
		{1,1,0,0,0,0,1,0},
		{1,1,0,0,0,0,1,0},
		{1,1,0,0,0,0,1,0},
		{0,0,0,0,0,0,0,0}
		},
		{
		{1,1,1,1,1,1,0,0},
		{1,0,0,0,0,1,0,0},
		{1,0,0,0,0,1,0,0},
		{1,1,1,1,1,1,1,0},
		{1,1,0,0,0,0,1,0},
		{1,1,0,0,0,0,1,0},
		{1,1,1,1,1,1,1,0},
		{0,0,0,0,0,0,0,0}
		},
		{
		{1,1,1,1,1,1,1,0},
		{1,1,0,0,0,0,1,0},
		{1,1,0,0,0,0,0,0},
		{1,1,0,0,0,0,0,0},
		{1,1,0,0,0,0,0,0},
		{1,1,0,0,0,0,1,0},
		{1,1,1,1,1,1,1,0},
		{0,0,0,0,0,0,0,0}
		},
		{
		{1,1,1,1,1,1,0,0},
		{1,1,0,0,0,1,1,0},
		{1,1,0,0,0,0,1,0},
		{1,1,0,0,0,0,1,0},
		{1,1,0,0,0,0,1,0},
		{1,1,0,0,0,1,1,0},
		{1,1,1,1,1,1,0,0},
		{0,0,0,0,0,0,0,0}
		},
		{
		{1,1,1,1,1,1,1,0},
		{1,1,0,0,0,0,0,0},
		{1,1,0,0,0,0,0,0},
		{1,1,1,1,1,1,1,0},
		{1,1,0,0,0,0,0,0},
		{1,1,0,0,0,0,0,0},
		{1,1,1,1,1,1,1,0},
		{0,0,0,0,0,0,0,0}
		}
	};
	system("cls");

	c=NULL;
	c=(int*)calloc(8,sizeof(int));
	c=**data_huruf;

	for(i=0; i<5; i++){
		for(j=0; j<8; j++){
			for(k=0; k<8; k++){
				if(*c++)
				printf("%c",219);
			else
				printf(" ");
			}
			puts("");
		}
		puts("");
	}
}