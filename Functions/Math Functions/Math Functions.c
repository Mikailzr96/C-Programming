﻿#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "Turkish");

	int sayi = 15, sayi3 = -1.0;

	float sayi2, kokalma, usalma, logaritma, mutlakdeger, asagiyuvarlama, yukariyuvarlama, sinx, cosx;

	sayi2 = 7.5;


	kokalma = sqrt(sayi);			// Sqrt - Karekök alma fonksiyonudur.

	usalma = pow(sayi, 2);			// Pow - Üs alma fonksiyonudur.

	logaritma = log(sayi);			// Log - Logaritma(ln) fonksiyonudur.

	mutlakdeger = fabs(sayi3);		// Fabs - Mutlak değer fonksiyonudur.

	sinx = sin(sayi3);				// Sin - Sinüs fonksiyonudur.

	cosx = cos(sayi3);				// Cos - Cosinüs fonksiyonudur.

	asagiyuvarlama = floor(sayi2);	// Floor - Aşağıya yuvarlama için kullanılan fonksiyondur.

	yukariyuvarlama = ceil(sayi2);	// Ceil - Yukarı yuvarlama için kullanılan fonksiyondur.

	printf("Sayı = 15\n\nKök Alma ---> %.2f \nÜs Alma ---> %.2f\nLogaritma ---> %.2f \n\n", kokalma, usalma, logaritma);
	printf("\nSayı = -1\n\nMutlak Değer ---> %.2f \nSinüs ---> %.2f \nCosinüs ---> %.2f\n\n", mutlakdeger, sinx, cosx);
	printf("\nSayı = 7.5\n\nAşağı Yuvarlama ---> %.2f \nYukarı Yuvarlama ---> %.2f \n\n", asagiyuvarlama, yukariyuvarlama);

}
