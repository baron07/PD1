#include <stdio.h>
#include <stdlib.h>
//tugas 5.5.2
void main(){
    int kali=1,hasil;
    printf("X\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10\t\n");
    for(int i=1;i<=10;i++){
        printf("%d\t",i);
        for(int j=1;j<=10;j++){
            hasil=kali*j;
            printf("%d\t",hasil);
        }
        printf("\n");
        kali++;
    }
}
