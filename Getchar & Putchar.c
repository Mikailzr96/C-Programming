#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	
	/*
	
		putchar(int); --> Karakterin ASCII tablosundaki kar��l���n� verir. putchar(65)  = A
		
		
		getchar(void); --> Karakterin ASCII tablosundaki kar��l���n� al�r.  putchar()'�n tersidir. A de�eri girildi�inde 65 de�erini verir.

	*/
	
	int sayi;
	
	printf("Bir karakter giriniz = ");
	
	int karakter = getchar();  // Karaktere A de�eri atand��� zaman ASCII tablosundaki A'ya kar��l�k gelen onluk say�y� yazd��r. 
	
	printf("Karakterin ASCII tablosundaki onluk tabandaki kar��l��� --> %d\n\n", karakter);

	printf("On taban�nda bir say� giriniz = ");
	scanf("%d",&sayi);
	printf("On taban�ndaki say�n�n ASCII tablosundaki karakter kar��l��� --> %c \n", putchar(sayi));

	
	
	
	
	
	
	
	
	
}
