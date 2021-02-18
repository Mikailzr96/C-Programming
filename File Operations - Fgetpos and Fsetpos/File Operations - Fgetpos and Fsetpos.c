#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	int fgetpos(FILE *stream, fpos_t *pos)			Akışın aktif dosya konumunu alır ve pos değişkenine yazar.
	int fsetpos(FILE *stream, const fpos_t *pos) 	Verilen akışın dosya konumunu verilen konuma ayarlar.
*/
int main()
{
	fpos_t position;

	FILE* dosya = fopen("Deneme.txt", "w+");
	if (dosya == NULL)
		fprintf(stderr, "Dosya acilamadi \n");


	fgetpos(dosya, &position);
	printf("Dosya isaretcisinin konumu = %d \n", ftell(dosya));		// Dosya isaretcisinin konumu = 0 

	fputs("Merhaba \n", dosya);										// Deneme.txt dosyasına 'Merhaba' yazdı.
	printf("Dosya isaretcisinin konumu = %d \n", ftell(dosya));

	fsetpos(dosya, &position);
	printf("Dosya isaretcisinin konumu = %d \n", ftell(dosya));		// Set ettiği için dosya isaretcisinin konumu = 0	

	fprintf(dosya, "Dunya");										// Set ettiği için dosya basından itibaren 'Dunya' yazar; 'merha' silinir !


	fclose(dosya);
}