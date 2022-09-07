#include <stdio.h>
#include <stdlib.h>
int koordinat(x,y){
  for(int i=0;i<=y;i++){
    printf("\n");
    for(int j=0;j<=x;j++){
      printf(" ");
    }
  }
}
void main(){
    int x,y;
    char kalimat[100];
    printf("Masukkan kalimat: ");fgets(kalimat,sizeof kalimat,stdin);
    int spasi=strlen(kalimat),huruf=0;
    printf("Masukkan koordinat (cth:x y): ");scanf("%d %d",&x,&y);
    koordinat(x,y);
    for(int i=0;i<strlen(kalimat);i++){
        for(int j=0;j<spasi;j++){
            printf(" ");}
        for(int k=0;k<huruf;k++){
            printf("%c",kalimat[k]);}
            printf("\n");
            spasi--;
            huruf++;
    }
}
