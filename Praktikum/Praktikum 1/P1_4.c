/* Nama File : INTRO5.C
Tugas 1.5.4
*/
#include <stdio.h>
#include <stdlib.h>
void main(){
    system("cls");
    char karakter;
    printf("\nMempelajari penggunaan getche() dengan variable");
    printf("\nTekan tombol yang  dikehendaki ");
    karakter = getch();
    printf("\n\nAnda menekan tombol %d", karakter);
    printf("\nAnda menekan tombol %c", karakter);
    getch();
}
