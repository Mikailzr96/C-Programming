#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char karakter[] = "C Programlama";
	FILE* dosya = fopen("Deneme.txt", "w");

	fputs(karakter, dosya);

	fclose(dosya);
}