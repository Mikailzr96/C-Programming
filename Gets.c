#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Turkish");
	
	char cumle1[255],cumle2[255];
	
	printf("Bir c�mle giriniz = ");
	gets(cumle1);		// Gets - Alfasay�sal veri girilmesini sa�lar. 

	printf("C�mleyi tekrar giriniz = ");
	scanf("%s",&cumle2);	// Scanf - Say�sal veri girilmesini sa�lar.
	
	
	printf("\nGets ile al�nan veriniz = %s",cumle1);
	printf("\nScanf ile al�nan veriniz = %s",cumle2);
	
	/* 
	�rnek ->
	
	C�mle "17 Mart 1998" olsun.
	
	Gets ile ekrana yazd���m�zda '17 Mart 1998' yaz�s� ��kar.
	Scanf ile ekrara yazd���m�zda '17' yaz�s� ��kar.��nk� scanf komutu bo�lu�a kadar olan k�sm� alabilmektedir.
	
	*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
