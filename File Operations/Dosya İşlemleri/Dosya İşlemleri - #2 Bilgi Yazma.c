#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	char baslik[] = "�ARPIM TABLOSU \n";
	
	FILE *dosya;
	
	
	dosya = fopen("C:\\Users\\IIIIIIIIIIIIIIIIIII\\Documents\\�arp�m Tablosu.txt","w"); 	
	/*
	dosya = fopen("dosya_adi","mod");
	
	"dosya_adi" yazan yerde dizin belirtmeseydik kodun kay�tl� oldu�u klas�re (M:/C Kodlar�) �arp�m Tablosu.txt diye dosya olu�uracakt�.	
	*/			
	
	if( dosya == NULL )	{
		printf("Dosya olu�turalamad� !\n");
	}
	else	{
		printf("Dosya ba�ar�yla olu�turuldu !\n");
	}
	
	fprintf(dosya,"%s",baslik);				// 	fprintf(dosya,"....");
	
	for(int i=1; i<=10; i++)
	{
		for(int j=1; j<=10; j++)
		{
			fprintf(dosya,"%d x %d = %d \n",i,j,i*j);
		}
		fprintf(dosya,"\n");
	}
	
	fputs("\n Mikail �ZT�RK",dosya);			//	fputs("......",dosya);															

	fclose(dosya);
}

