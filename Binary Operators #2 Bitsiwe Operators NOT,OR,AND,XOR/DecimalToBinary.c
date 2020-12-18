#include "DecimalToBinary.h"


int DB(number) {

    int a[10], i, j;
    for (i = 0; number > 0; i++)
    {
        a[i] = number % 2;
        number = number / 2;
    }

    printf("\n Sayýnýn 2'lik tabandaki karþýlýðý =  ");
    for (j = i - 1; j >= 0; j--) {
        printf(" %d ", a[j]);
    }
    printf("\n");

    return 1;
}