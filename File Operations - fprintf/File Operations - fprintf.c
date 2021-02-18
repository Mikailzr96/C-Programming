#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{

	FILE* dosya = fopen("Deneme.txt", "w");
	if (!dosya)
		printf("Dosya yazma islemi basarasiz \n");
	else
		printf("Dosya yazma islemi basarili \n");


	fprintf(dosya, "Merhaba Dunya ");


	fclose(dosya);

}