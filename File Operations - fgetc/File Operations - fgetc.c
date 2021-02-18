#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* dosya = fopen("Deneme.txt", "r");		// Eğer fopen() fonksiyonu normal olarak çalışmazsa NULL bir işaretçi geri döndürür

	if (!dosya) {								// !dosya -->  dosya == NULL; 
		printf("Dosya açilmadi \n");
		return 1;
	}

	int karakter;
	while ((karakter = fgetc(dosya)) != EOF)	// fgetc -> Dosyadan bir karakter veri okur.
		putchar(karakter);						// putchar() fonksiyonu ise, ekrana tek bir karakter yazar.

	fclose(dosya);

}