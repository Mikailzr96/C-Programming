#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char karakter[50];
	FILE* dosya = fopen("Deneme.txt", "r");
	if (dosya==NULL)
		printf("Dosya okuma islemi basarasiz \n");
	else
		printf("Dosya okuma islemi basarili \n");

	
	while (fscanf(dosya, "%s ", karakter) != EOF)
		puts(karakter);
	


	fclose(dosya);

}