#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Turkish");
	
	char cumle1[255],cumle2[255];
	
	printf("Bir cümle giriniz = ");
	gets(cumle1);		// Gets - Alfasayýsal veri girilmesini saðlar. 

	printf("Cümleyi tekrar giriniz = ");
	scanf("%s",&cumle2);	// Scanf - Sayýsal veri girilmesini saðlar.
	
	
	printf("\nGets ile alýnan veriniz = %s",cumle1);
	printf("\nScanf ile alýnan veriniz = %s",cumle2);
	
	/* 
	Örnek ->
	
	Cümle "17 Mart 1998" olsun.
	
	Gets ile ekrana yazdýðýmýzda '17 Mart 1998' yazýsý çýkar.
	Scanf ile ekrara yazdýðýmýzda '17' yazýsý çýkar.Çünkü scanf komutu boþluða kadar olan kýsmý alabilmektedir.
	
	*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
