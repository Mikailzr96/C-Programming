#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	
	FILE *dosya = fopen("C:\\Users\\IIIIIIIIIIIIIIIIIII\\Documents\\Dosya Okuma.txt","r");
	
	char karakter[50][20];
	int i = 0;
	
	while( !feof(dosya) )
	{
		fscanf(dosya,"%s",karakter[i]);
		printf("%s ",karakter[i]);
		i++;
	}
	fclose(dosya);
	
}
/*
Okunacak Belgede Yazan -->


Merhaba,dosya okuma islemi basarili

Mikail ÖZTÜRK
*/
