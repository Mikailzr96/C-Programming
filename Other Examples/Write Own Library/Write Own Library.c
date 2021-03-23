#include <stdio.h>
#include <locale.h>
#include "My_Library.h"	 // Standart kütüphaneleri çağırırken < > kullanılır, kendi yazdığımız kütüphaneleri çağırıken " " kullanılır.

int main()
{
	setlocale(LC_ALL, "Turkish");

	int sayi;
	printf("Faktöriyeli hesaplanacak sayıyı giriniz = ");
	scanf_s("%d", &sayi);

	printf("%d ! = %d \n", sayi, faktoriyel(sayi));

}