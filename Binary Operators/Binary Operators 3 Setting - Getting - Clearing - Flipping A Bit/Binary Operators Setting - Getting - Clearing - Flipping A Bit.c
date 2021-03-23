#include <stdio.h>
#include <locale.h>
#include "DecimalToBinary.h"

int main()
{
    setlocale(LC_ALL, "Turkish");
    int number;
    printf("\n 10'luk tabandan 2'lik tabana dönüştürmek istediğiniz sayıyı giriniz :  ");
    scanf_s("%d", &number);

    D(number);          //   Decimal --> Binary 

/*--------------------------------------------------------------------------------------------------------------------*/
    printf("\n\nGET|2.Biti kaçtır ?  --> \n");
    if (number & (1 << 2))      // 2.bitindeki sayıyı 1 yapıyor.
        printf("\n %d sayısının 2.Biti --> 1 dir. \n", number);
    else
        printf("\n %d sayısının 2.Biti --> 0 dır.  \n", number);
/*--------------------------------------------------------------------------------------------------------------------*/
    printf("\n\nSET|2.Biti Set(1) Etmek  --> \n");
    D(number |= (1 << 2));      // 2.bitindeki sayıyı 1 yapıyor. 
 /*-------------------------------------------------------------------------------------------------------------------*/
    printf("\n\nCLEAR|2.Biti Clear(0) Etmek --> \n");
    D(number &= ~(1 << 2));     // 2.bitindeki sayıyı 0 yapıyor.
/*--------------------------------------------------------------------------------------------------------------------*/
    printf("\n\nCLEAR|2.Biti Flip Etmek --> \n");
    D(number ^= (1 << 2));      // 2.bitindeki sayıyı değiştirme işlemi ( 1 ise 0 , 0 ise 1 yapar )
/*--------------------------------------------------------------------------------------------------------------------*/



    




}