#include <stdio.h>
#include <stdlib.h>

int main()
{
    char karakter;
    printf("Masukkan karakter: ");
    karakter = getche();
    if(karakter>='a' && karakter <='z'){
        printf("\nKarakter merupakan huruf kecil");
    }else if(karakter>= 'A' && karakter <='Z'){
        printf("\nKarakter merupakan huruf kapital");
    }else if(karakter >= '0' && karakter <= '9'){
        printf("\nKarakter merupakan angka");
    }else{
        printf("\nKarakter merupakan karakter khusus");
    }
}
