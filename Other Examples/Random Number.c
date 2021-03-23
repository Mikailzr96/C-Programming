#include <stdio.h>
#include <locale.h>
#include <stdlib.h>		//	 rand() fonksiyonu için
#include <time.h>		// 	 time() fonksiyonu için 
main()
{
	setlocale(LC_ALL,"Turkish");
	
	int sayi;
	
	srand(time(NULL));		// Program her çalýþtýðýnda farklý rastgele sayýlar atar.
	sayi = rand();   		// Deðiþkene sadece rastgele bir deðer atar.Programý her çalýþtýrdýðýmýzda deðer deðiþmez.
	
	printf("Sayý = %d ",sayi);
	
	/*
	Eðer rasgele atanacak sayýyý belli sýnýrlar içine almak istersek :
	
	srand(time(NULL));		
	sayi = rand() % Üstsýnýr;  ---> 0-Üstsýnýr deðeri arasýnda rastgele sayýlar atar. ( 0-50 , 0-100 vs.)

	
	*/
	
	
	
	
	
	
	
	
	
	
	
		
	
}
