#include <stdio.h>
#include <locale.h>
#include "MyLibrary.h"

#define			SIZE			10

int main()
{
	setlocale(LC_ALL, "Turkish");

	int dizi[SIZE] = { 2,4,6,8,10,12,14,16,18,20 };

	dizi_yazdir1(dizi, SIZE);	printf("\n");
	dizi_yazdir2(dizi, SIZE);	printf("\n");
	dizi_yazdir3(dizi, SIZE);	printf("\n");
}