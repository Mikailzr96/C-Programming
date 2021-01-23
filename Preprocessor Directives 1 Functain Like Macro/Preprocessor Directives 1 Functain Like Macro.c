#include <stdio.h>
#include <locale.h>


#define	TOPLA(x,y)	((x) + (y))
#define	MAX(x,y)	((x > y) ? (x) : (y))



int main()
{
	setlocale(LC_ALL, "Turkish");

	int sayi1, sayi2;
	printf("İki sayı giriniz = \n");
	scanf_s("%d %d", &sayi1, &sayi2);

	printf("%d + %d = %d \n", sayi1, sayi2, TOPLA(sayi1, sayi2));

	printf("Büyük Değer --> %d \n", MAX(sayi1, sayi2));


}