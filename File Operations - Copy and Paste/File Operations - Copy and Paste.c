#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	FILE* dosya1 = fopen("Kopyalanacak_Belge.txt", "r");

	if (!dosya1)
		printf("Dosya okuma islemi basarisiz \n");
	else
		printf("Dosya okuma islemi basarili \n");

	FILE* dosya2 = fopen("Yapıştırılacak_Belge.txt", "w");

	if (!dosya2)
		printf("Dosya yazma islemi basarisiz \n");
	else
		printf("Dosya yazma islemi basarili \n");

	int karakter;

	while ((karakter = fgetc(dosya1)) != EOF)
		fputc(karakter, dosya2);

}