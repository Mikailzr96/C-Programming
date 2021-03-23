#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Turkish");
	
	/* 
		T�r D�n��t�rme
		
		1.Otomatik D�n���mler -> �rne�in aritmetik ifadede t�m tipler ayn� de�ildir. Mesela 3.2/2 dedi�imiz zaman float ve int beraber oluyor
		Burada sonu� ne olacakt�r 1.6 ��nk� otomatik bir d�n���m yap�l�yor. ( 2 say�s� floata �evirilip 2.0 oluyor ge�ici olarak.)
		
		Otomatik D�n���m �izelgesi :
		
		short,char ---------> int ---------> float ---------> long,double
		
		Mesela int ve float beraberse herkes double'a otomatik olarak �evirlir.	(Sa�a do�ru �ncelik art�yor.)	
		
		
		2.Manuel D�n���mler -> Otomatik d�n���mlerin olmad��� yerlerde kendimiz yapabiliriz.
		
		3.2 say�s� int yapmak istersek -----> (int)3.2 -------> 3 sonucunu verir. (Kesirli k�sm� atar.)
		
	*/ 
	
	int sayi = 3;
	double sayi1 = 0.1;

	printf("Sonu� = %.1f \n", sayi/sayi1);	// Otomatik D�n���m = �nt --> Double ; 3 --> 3.0 , (3.0)/(0.1) = 30.0
	
	int sayi2 = 7;
	float sayi3 = 5.34;
	
	printf("Say�n�n float de�eri = %.1f \n",(float)sayi2);	// Manuel D�n���m = �nt --> Float ; 7 -> 7.0 
	printf("Say�n�n int  de�eri = %d \n",(int)sayi3);		// Manuel D�n���m Float --> �nt ; 5.34 -> 5
	
	
}
