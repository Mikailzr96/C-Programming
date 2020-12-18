#include <stdio.h>
#include <locale.h>
#include "DecimalToBinary.h"

int main()
{
    setlocale(LC_ALL, "Turkish");

    int number;
    printf("\n 10'luk tabandan 2'lik tabana dönüştürmek istediğniz sayıyı giriniz :  ");
    scanf_s("%d", &number);

    DtB(number);
    printf("\n\n 1 bit sola kaydırmak --> \n");     // Sağa 0 ekliyor
    DtB(number << 1);
    printf("\n\n 1 bit sağa kaydırmak --> \n");     // Sola 0 ekliyor
    DtB(number >> 1);


    return 0;
}