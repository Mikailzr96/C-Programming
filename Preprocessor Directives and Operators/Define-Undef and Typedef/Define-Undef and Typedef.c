#include <stdio.h>
#include <locale.h>
#include <math.h>

#define pi 3.14 // "#define" komutu - Sabitleri sembolik bir dile aktarılmasını sağlar.
// "#undef" komutu - Yazıldığı satırdan itibaren sabitleri tanımsız yapar.Örneğin #undef pi ifadesi pi sabitini tanımsız yapar.

typedef float ondalikli; // "typedef" komutu - Standart veri tipleri cinsinden,kendine ait özel veri tipi oluşturmaya yarar.

main()
{
	setlocale(LC_ALL, "Turkish");

	ondalikli yaricap;

	printf("Yarıçap değerini giriniz = ");
	scanf_s("%f", &yaricap);


	ondalikli alan = pow(yaricap, 2) * pi; // pow - math.h kütüphanesinde tanımlı olup , üs almak için kullanılan fonksiyondur. pow(taban,üs)

	printf("Alan = %.2f", alan);


}