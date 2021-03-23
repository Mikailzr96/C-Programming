#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
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
	setlocale(LC_ALL, "Turkish");

	char karakter_dizisi[20];
	fgets(karakter_dizisi, 20, stdin);
	printf(karakter_dizisi);


	fprintf(stdout, "Hello World \n");
	fputs("Hello World \n", stdout);
	fputc('A', stdout);
	fputc('\n', stdout);

	int x;
	fscanf(stdin, "%d", &x);
	fprintf(stdout, "X = %d \n", x);

}