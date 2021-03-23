#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Turkish");
	
	/* 
		Tür Dönüþtürme
		
		1.Otomatik Dönüþümler -> Örneðin aritmetik ifadede tüm tipler ayný deðildir. Mesela 3.2/2 dediðimiz zaman float ve int beraber oluyor
		Burada sonuç ne olacaktýr 1.6 çünkü otomatik bir dönüþüm yapýlýyor. ( 2 sayýsý floata çevirilip 2.0 oluyor geçici olarak.)
		
		Otomatik Dönüþüm Çizelgesi :
		
		short,char ---------> int ---------> float ---------> long,double
		
		Mesela int ve float beraberse herkes double'a otomatik olarak çevirlir.	(Saða doðru öncelik artýyor.)	
		
		
		2.Manuel Dönüþümler -> Otomatik dönüþümlerin olmadýðý yerlerde kendimiz yapabiliriz.
		
		3.2 sayýsý int yapmak istersek -----> (int)3.2 -------> 3 sonucunu verir. (Kesirli kýsmý atar.)
		
	*/ 
	
	int sayi = 3;
	double sayi1 = 0.1;

	printf("Sonuç = %.1f \n", sayi/sayi1);	// Otomatik Dönüþüm = Ýnt --> Double ; 3 --> 3.0 , (3.0)/(0.1) = 30.0
	
	int sayi2 = 7;
	float sayi3 = 5.34;
	
	printf("Sayýnýn float deðeri = %.1f \n",(float)sayi2);	// Manuel Dönüþüm = Ýnt --> Float ; 7 -> 7.0 
	printf("Sayýnýn int  deðeri = %d \n",(int)sayi3);		// Manuel Dönüþüm Float --> Ýnt ; 5.34 -> 5
	
	
}
