#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");

	int sayi = 5;
	
	int *p = &sayi;
	
	printf("�lk Adres --> %p \n", p);
	printf("�lk De�er --> %d \n", *p);
	
	(*p)++;					// *p = &sayi oldu�unda *p = 5'dir. (*p)++ = 5+1 = 6 sonucunu verir.			

	printf("Son De�er --> %d \n", *p);
	
	(p)++;					// Adres de�erini 4 art�r�r ��nk� int *p oldu�u i�in bellekte 4 byte yer kaplar.	
	
	printf("Son Adres --> %p \n", p);
}
