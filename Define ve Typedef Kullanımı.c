#include <stdio.h>
#include <locale.h>
#include <math.h>

#define pi 3.14 // "define" komutu - Sabitleri sembolik bir dile aktarýlmasýný saðlar.
#undef pi 3.14


typedef float ondalikli; // "typedef" komutu - Standart veri tipleri cinsinden,kendine ait özel veri tipi oluþturmaya yarar.

main()
{
	setlocale(LC_ALL,"Turkish");
			
	ondalikli yaricap;
	
	printf("Yarýçap deðerini giriniz = ");
	scanf("%f",&yaricap);
	
	
	ondalikli alan = pow(yaricap,2)*pi; // pow - math.h kütüphanesinde tanýmlý olup , üs almak için kullanýlan fonksiyondur. pow(taban,üs)

	printf("Alan = %.2f",alan);


}
