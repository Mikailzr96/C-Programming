#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	
	/*
	
		putchar(int); --> Karakterin ASCII tablosundaki karþýlýðýný verir. putchar(65)  = A
		
		
		getchar(void); --> Karakterin ASCII tablosundaki karþýlýðýný alýr.  putchar()'ýn tersidir. A deðeri girildiðinde 65 deðerini verir.

	*/
	
	int sayi;
	
	printf("Bir karakter giriniz = ");
	
	int karakter = getchar();  // Karaktere A deðeri atandýðý zaman ASCII tablosundaki A'ya karþýlýk gelen onluk sayýyý yazdýýr. 
	
	printf("Karakterin ASCII tablosundaki onluk tabandaki karþýlýðý --> %d\n\n", karakter);

	printf("On tabanýnda bir sayý giriniz = ");
	scanf("%d",&sayi);
	printf("On tabanýndaki sayýnýn ASCII tablosundaki karakter karþýlýðý --> %c \n", putchar(sayi));

	
	
	
	
	
	
	
	
	
}
