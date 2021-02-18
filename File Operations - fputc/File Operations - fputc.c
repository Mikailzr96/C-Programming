#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* dosya = fopen("Rakamlar.txt", "w");

	if (!dosya)
		printf("Dosya yazma hatasi \n");
	else
		printf("Dosya yazma islemi basarili \n");

	for (int i = 48; i < 58; i++)	// ASCII göre 48 -> 0 ..... 58 -> 9 rakamına karşılık gelir. 
		fputc(i, dosya);			// fputc() -> Dosyaya bir karakter veri kaydeder.Birden fazla karakter varsa son karakteri esas alır.
		
	fputc(' ', dosya);				// Boşluk karakteri 

	for (int i = 0; i < 10; i++)	// Rakamları yazdırmanın farklı bir yolu.
		fputc('0' + i, dosya);


	fclose(dosya);
}