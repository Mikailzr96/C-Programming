#include <stdio.h>
#include <locale.h>
#include <math.h>

#define pi 3.14 // "define" komutu - Sabitleri sembolik bir dile aktar�lmas�n� sa�lar.
#undef pi 3.14


typedef float ondalikli; // "typedef" komutu - Standart veri tipleri cinsinden,kendine ait �zel veri tipi olu�turmaya yarar.

main()
{
	setlocale(LC_ALL,"Turkish");
			
	ondalikli yaricap;
	
	printf("Yar��ap de�erini giriniz = ");
	scanf("%f",&yaricap);
	
	
	ondalikli alan = pow(yaricap,2)*pi; // pow - math.h k�t�phanesinde tan�ml� olup , �s almak i�in kullan�lan fonksiyondur. pow(taban,�s)

	printf("Alan = %.2f",alan);


}
