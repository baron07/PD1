#include <stdio.h>
#include <stdlib.h>

void main(){
    float angka1, angka2;
    char perintah, tanda;
    puts("Operator yang digunakan adalah: * / + - % & | s e");
    puts("Operator s memerintah program untuk men-set 'accumulator'");
    puts("Operator e memerintah program untuk mengakhiri program");
    printf("Masukkan angka dan perintah(100 s):");
    scanf("%f %c",&angka1, &perintah);
        if(perintah == 's'){
            mulai:
            printf("= %f \n",angka1);
            printf("Masukkan angka dan operator(1 +): ");
            scanf("%f %c",&angka2,&tanda);
            switch(tanda){
                case '+': angka1 = angka1 + angka2; goto mulai;
                case '-': angka1 = angka1 - angka2; goto mulai;
                case '/': angka1 = angka1 / angka2; goto mulai;
                case '*': angka1 = angka1 * angka2; goto mulai;
                case '%': angka1 = (int)angka1 % (int)angka2; goto mulai;
                case '|': angka1 = (int)angka1 | (int)angka2; goto mulai;
                case '&': angka1 = (int)angka1 & (int)angka2; goto mulai;
                case 'e': printf("Akhir perhitungan"); break;
                default : printf("operator salah masukkan lagi \n");goto mulai;
            }
    }else if(perintah=='e'){
        printf("Akhir perhitungan");
    }else{
        printf("input salah");
    }
}

