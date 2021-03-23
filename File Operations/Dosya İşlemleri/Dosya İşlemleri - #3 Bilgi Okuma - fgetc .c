#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	FILE *dosya = fopen("C:\\Users\\IIIIIIIIIIIIIIIIIII\\Documents\\Dosya Okuma.txt","r");
	
	char karakter;
	
	while( karakter != EOF )
	{
		karakter = fgetc(dosya);
		printf("%c",karakter);
	}
	
	fclose(dosya);	

}
/*
Okunacak Belgede Yazan -->


Merhaba,dosya okuma islemi basarili

Mikail ÖZTÜRK
*/

