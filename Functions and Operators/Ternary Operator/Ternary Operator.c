#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Turkish");

	/*

		? OPERATÖRÜ
	   --------------

		(koşul) ? (koşul sağlanırsa) : (koşul sağlanmazsa);

	*/

	int x = 20, y = 10;

	int buyuksayi;

	buyuksayi = x > y ? x : y;


	printf("Büyük Değer = %d \n", buyuksayi);


}