#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Turkish");

	/*
		Tür Dönüştürme

		1.Otomatik Dönüşümler -> Örneğin aritmetik ifadede tüm tipler aynı değildir. Mesela 3.2/2 dediğimiz zaman float ve int beraber oluyor
		Burada sonuç ne olacaktır 1.6 çünkü otomatik bir dönüşüm yapılıyor. ( 2 sayısı floata çevirilip 2.0 oluyor geçici olarak.)

		Otomatik Dönüşüm Çizelgesi :

		short,char ---------> int ---------> float ---------> long,double

		Mesela int ve float beraberse herkes double'a otomatik olarak çevirlir.	(Sağa doğru öncelik artıyor.)


		2.Manuel Dönüşümler -> Otomatik dönüşümlerin olmadığı yerlerde kendimiz yapabiliriz.

		3.2 sayısı int yapmak istersek -----> (int)3.2 -------> 3 sonucunu verir. (Kesirli kısmı atar.)

	*/

	int sayi = 3;
	double sayi1 = 0.1;

	printf("Sonuç = %.1f \n", sayi / sayi1);	// Otomatik Dönüşüm = İnt --> Double ; 3 --> 3.0 , (3.0)/(0.1) = 30.0

	int sayi2 = 7;
	float sayi3 = 5.34;

	printf("Sayının float değeri = %.1f \n", (float)sayi2);	// Manuel Dönüşüm = İnt --> Float ; 7 -> 7.0 
	printf("Sayının int  değeri = %d \n", (int)sayi3);		// Manuel Dönüşüm Float --> İnt ; 5.34 -> 5


}