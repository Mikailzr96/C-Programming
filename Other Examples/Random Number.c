#include <stdio.h>
#include <locale.h>
#include <stdlib.h>		//	 rand() fonksiyonu i�in
#include <time.h>		// 	 time() fonksiyonu i�in 
main()
{
	setlocale(LC_ALL,"Turkish");
	
	int sayi;
	
	srand(time(NULL));		// Program her �al��t���nda farkl� rastgele say�lar atar.
	sayi = rand();   		// De�i�kene sadece rastgele bir de�er atar.Program� her �al��t�rd���m�zda de�er de�i�mez.
	
	printf("Say� = %d ",sayi);
	
	/*
	E�er rasgele atanacak say�y� belli s�n�rlar i�ine almak istersek :
	
	srand(time(NULL));		
	sayi = rand() % �sts�n�r;  ---> 0-�sts�n�r de�eri aras�nda rastgele say�lar atar. ( 0-50 , 0-100 vs.)

	
	*/
	
	
	
	
	
	
	
	
	
	
	
		
	
}
