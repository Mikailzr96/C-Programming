/*
	Kullan�c�dan �nce T�rk�e mi �ngilizce mi men� istedi�ini soracak daha sonra kullan�c�n�n tercihine g�re ay s�ra numaras�n� 
	isteyen ve daha sonra hangi ay oldu�unu ekrana yazan program� yaz�n�z. 
*/
#include <stdio.h>
#include <locale.h>
void turkcemenu()
{
	int secimTR;
		printf("\nDil T�rk�e olarak ayarland�...\n");
		printf("1.Ocak\n2.�ubat\n3.Mart\n4.Nisan\n5.May�s\n6.Haziran\n7.Temmuz\n8.A�ustos\n9.Eyl�l\n10.Ekim\n11.Kas�m\n12.Aral�k\n"); git:
		printf("\nL�tfen bir ay numaras� giriniz = ");
		scanf("%d",&secimTR);
		switch(secimTR)
		{
			case 1: printf("Ocak ay�n� se�tiniz."); break;
			case 2: printf("�ubat ay�n� se�tiniz."); break;
			case 3: printf("Mart ay�n� se�tiniz."); break;
			case 4: printf("Nisan ay�n� se�tiniz."); break;
			case 5: printf("May�s ay�n� se�tiniz."); break;
			case 6: printf("Haziran ay�n� se�tiniz."); break;
			case 7: printf("Temmuz ay�n� se�tiniz."); break;
			case 8: printf("A�ustos ay�n� se�tiniz."); break;
			case 9: printf("Eyl�l ay�n� se�tiniz."); break;
			case 10: printf("Ekim ay�n� se�tiniz."); break;
			case 11: printf("Kas�m ay�n� se�tiniz."); break;
			case 12: printf("Aral�k ay�n� se�tiniz."); break;
			default: printf("Yanl�� bir de�er girdiniz."); goto git;
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
	
	printf("Men� dilini se�iniz \\ Select menu language --->\n1-) T�rk�e\n2-) English  ");
	scanf("%d",&secim);
	
	while( secim != 1 && secim != 2 )
	{
		printf("\nYanl�� bir de�er girdiniz.L�tfen tekrar giriniz \\ You entered an incorrect value.Please re-enter \n");
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

