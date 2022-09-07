#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x, y;
    float z;
    printf("Formula 1 & 2:\n");
    printf("Masukkan nilai x = ");
    scanf("%d",&x);
    y = 3 * x * x + 6 * x + 9;
    z = (float)(2 * y * y  + 5 * x * x) / (float)(9*y);
    printf("Didapatkan nilai y = %d dan nilai z = %f", y, z);
}
