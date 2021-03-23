#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
    
    int number,number2;
    printf("\n 10'luk tabandan 2'lik tabana dönüştürmek istediğiniz sayıyı giriniz :  ");
    scanf_s("%d", &number);
    printf("\n 10'luk tabandan 2'lik tabana dönüştürmek istediğiniz sayıyı giriniz :  ");
    scanf_s("%d", &number2);
    
    DB(number);
    DB(number2);

    printf("\n\nNOT| ~%d İşlemi Sonucu --> \n", number);                     // Değil İşlemi (~opr1)
    DB(~number2);  
    printf("\n\nOR| %d | %d İşlemi Sonucu --> \n", number, number2);         // Veya İşlemi (opr1 | opr2)
    DB(number | number2);
    printf("\n\nAND| %d & %d İşlemi Sonucu --> \n", number, number2);       // Ve İşlemi (opr1 & opr2)
    DB(number & number2);
    printf("\n\nXOR| %d ^ %d İşlemi Sonucu --> \n", number, number2);       // XOR İşlemi (opr1 ^ opr2)
    DB(number ^ number2);


    





}