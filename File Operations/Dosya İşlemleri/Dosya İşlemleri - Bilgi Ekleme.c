#include <stdio.h>
#include <locale.h>
#include <conio.h>
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	
	char ad[25],adres[40],tel[12];
	
	FILE *dosya;

	dosya = fopen("Rehber.txt","a+"); 
	
	if( dosya == NULL )	dosya = fopen("Rehber.txt","wt");
	printf("Adý  = "); 			gets(ad);
	printf("Adres = ");			gets(adres);
	printf("Telefon = ");		gets(tel);
	
	fprintf(dosya,"%s\t%s\t%s\n",ad,adres,tel);
	
	fclose(dosya);
}

