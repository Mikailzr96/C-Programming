#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Turkish");
	
	/* 
		Sizeof operat�r� -> Verinin bellekte ka� byte yer kaplad���n� g�sterir.
		
	*/
	
	int sayi = 7;
	double sayi2 = 4.9;
	int dizi[5];
		
	printf("Verinin bellekte kaplad��� byte miktar� = %d \n",sizeof(sayi));				// �nt Veriler -> 4 Byte
	printf("Verinin bellekte kaplad��� byte miktar� = %d \n",sizeof(sayi2));			// Double Veriler -> 8 Byte
	printf("Dizinin bellekte kaplad��� byte miktar� = %d \n",sizeof(dizi));				// �nt dizi 4 Byte + 5 elemanl� oldu�u i�in -> 20 Byte
	printf("Main fonksiyonunu bellekte kaplad��� byte miktar� = %d \n",sizeof(main()));	// �nt main oldu�undan -> 4 Byte

	
	/*
	Baz� Kullan�mlar� ->
	
	int sayi = 10 + sizeof(char);  --> sayi = 10 + 1 = 11 
	
	int dizi[sizeof(double)] --> int dizi[8];
		
		
	*/	
}

