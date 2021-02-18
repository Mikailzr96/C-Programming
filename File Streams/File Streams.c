#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	Bir programı çalıştırdığımızda, program aşağıda gösterilen standart metin akışlarını otomatik olarak açar. Bu metin akışları yoluyla,
	program bilgisayara bağlı aygıtlara (Klavye, ekran, yazıcı gibi...) tıpkı bir dosya gibi erişebilir:

	stdin  : Klavyeden veri okur.
	stdout : Verileri ekrana yollar.
	stderr : Hata verilerini ekrana yollar.
	stdaux : Seri port'tan veri alışverişi yapar.
	stdprn : Verileri yazıcıya yollar.
*/

int main()
{
	fprintf(stdout, "Hello World \n");
	fputs("Hello World \n", stdout);
	fputc('A', stdout);
	fputc(' ', stdout);

	int x;
	fscanf(stdin, "%d", &x);
	fprintf(stdout, "X = %d \n", x);

	FILE* dosya = fopen("Deneme", "rb");
	if (!dosya)
		fprintf(stderr, "Dosya bulunamadi \n");
	fclose(dosya);
}