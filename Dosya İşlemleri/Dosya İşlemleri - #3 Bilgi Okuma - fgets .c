#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	FILE *dosya = fopen("C:\\Users\\IIIIIIIIIIIIIIIIIII\\Documents\\Dosya Okuma.txt","r");
	
	char karakter[50];
	
	fgets(karakter,50,dosya);
	
	puts(karakter);		// 	puts ( de�i�ken ) --> Belirtilen alfasay�sal veriyi ekrana yazar.

	fclose(dosya);

}
/*
Okunacak Belgede Yazan -->


Merhaba,dosya okuma islemi basarili

Mikail �ZT�RK
*/

