/*
	Kullanýcýdan önce Türkçe mi Ýngilizce mi menü istediðini soracak daha sonra kullanýcýnýn tercihine göre ay sýra numarasýný 
	isteyen ve daha sonra hangi ay olduðunu ekrana yazan programý yazýnýz. 
*/
#include <stdio.h>
#include <locale.h>
void turkcemenu()
{
	int secimTR;
		printf("\nDil Türkçe olarak ayarlandý...\n");
		printf("1.Ocak\n2.Þubat\n3.Mart\n4.Nisan\n5.Mayýs\n6.Haziran\n7.Temmuz\n8.Aðustos\n9.Eylül\n10.Ekim\n11.Kasým\n12.Aralýk\n"); git:
		printf("\nLütfen bir ay numarasý giriniz = ");
		scanf("%d",&secimTR);
		switch(secimTR)
		{
			case 1: printf("Ocak ayýný seçtiniz."); break;
			case 2: printf("Þubat ayýný seçtiniz."); break;
			case 3: printf("Mart ayýný seçtiniz."); break;
			case 4: printf("Nisan ayýný seçtiniz."); break;
			case 5: printf("Mayýs ayýný seçtiniz."); break;
			case 6: printf("Haziran ayýný seçtiniz."); break;
			case 7: printf("Temmuz ayýný seçtiniz."); break;
			case 8: printf("Aðustos ayýný seçtiniz."); break;
			case 9: printf("Eylül ayýný seçtiniz."); break;
			case 10: printf("Ekim ayýný seçtiniz."); break;
			case 11: printf("Kasým ayýný seçtiniz."); break;
			case 12: printf("Aralýk ayýný seçtiniz."); break;
			default: printf("Yanlýþ bir deðer girdiniz."); goto git;
		}
}
void englishmenu()
{
	int chooseENG;
		printf("\nLanguage set to English...\n");
		printf("1.January \n2.February \n3.March \n4.April \n5.May \n6.June\n7.July\n8.August \n9.September \n10.October\n11.November\n12.December\n"); go:
		printf("\nPlease enter a month number = ");
		scanf("%d",&chooseENG);
		switch(chooseENG)
		{
			case 1: printf("You've chosen the month of January."); break;
			case 2: printf("You've chosen the month of February."); break;
			case 3: printf("You've chosen the month of March."); break;
			case 4: printf("You've chosen the month of April."); break;
			case 5: printf("You've chosen the month of May."); break;
			case 6: printf("You've chosen the month of June."); break;
			case 7: printf("You've chosen the month of July."); break;
			case 8: printf("You've chosen the month of August."); break;
			case 9: printf("You've chosen the month of September."); break;
			case 10: printf("You've chosen the month of October."); break;
			case 11: printf("You've chosen the month of November."); break;
			case 12: printf("You've chosen the month of December."); break;
			default: printf("You entered an incorrect value.."); goto go;
		}
}
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int secim,turkcemenu(),englishmenu();
	
	printf("Menü dilini seçiniz \\ Select menu language --->\n1-) Türkçe\n2-) English  ");
	scanf("%d",&secim);
	
	while( secim != 1 && secim != 2 )
	{
		printf("\nYanlýþ bir deðer girdiniz.Lütfen tekrar giriniz \\ You entered an incorrect value.Please re-enter \n");
		scanf("%d",&secim);
	}
	
	if( secim == 1 )
	{
		printf("%d",turkcemenu());
	}
	else if( secim == 2 ) 
	{
		printf("%d",englishmenu());
	}
	return 0;
}

