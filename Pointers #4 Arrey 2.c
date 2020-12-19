#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");

	int sayi = 5;
	
	int *p = &sayi;
	
	printf("Ýlk Adres --> %p \n", p);
	printf("Ýlk Deðer --> %d \n", *p);
	
	(*p)++;					// *p = &sayi olduðunda *p = 5'dir. (*p)++ = 5+1 = 6 sonucunu verir.			

	printf("Son Deðer --> %d \n", *p);
	
	(p)++;					// Adres deðerini 4 artýrýr çünkü int *p olduðu için bellekte 4 byte yer kaplar.	
	
	printf("Son Adres --> %p \n", p);
}
