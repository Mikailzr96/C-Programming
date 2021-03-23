#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Turkish");
	
	/* 
		Sizeof operatörü -> Verinin bellekte kaç byte yer kapladýðýný gösterir.
		
	*/
	
	int sayi = 7;
	double sayi2 = 4.9;
	int dizi[5];
		
	printf("Verinin bellekte kapladýðý byte miktarý = %d \n",sizeof(sayi));				// Ýnt Veriler -> 4 Byte
	printf("Verinin bellekte kapladýðý byte miktarý = %d \n",sizeof(sayi2));			// Double Veriler -> 8 Byte
	printf("Dizinin bellekte kapladýðý byte miktarý = %d \n",sizeof(dizi));				// Ýnt dizi 4 Byte + 5 elemanlý olduðu için -> 20 Byte
	printf("Main fonksiyonunu bellekte kapladýðý byte miktarý = %d \n",sizeof(main()));	// Ýnt main olduðundan -> 4 Byte

	
	/*
	Bazý Kullanýmlarý ->
	
	int sayi = 10 + sizeof(char);  --> sayi = 10 + 1 = 11 
	
	int dizi[sizeof(double)] --> int dizi[8];
		
		
	*/	
}

