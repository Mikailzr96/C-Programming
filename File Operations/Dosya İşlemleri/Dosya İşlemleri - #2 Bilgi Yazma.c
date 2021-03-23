#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	char baslik[] = "ÇARPIM TABLOSU \n";
	
	FILE *dosya;
	
	
	dosya = fopen("C:\\Users\\IIIIIIIIIIIIIIIIIII\\Documents\\Çarpým Tablosu.txt","w"); 	
	/*
	dosya = fopen("dosya_adi","mod");
	
	"dosya_adi" yazan yerde dizin belirtmeseydik kodun kayýtlý olduðu klasöre (M:/C Kodlarý) Çarpým Tablosu.txt diye dosya oluþuracaktý.	
	*/			
	
	if( dosya == NULL )	{
		printf("Dosya oluþturalamadý !\n");
	}
	else	{
		printf("Dosya baþarýyla oluþturuldu !\n");
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
	
	fputs("\n Mikail ÖZTÜRK",dosya);			//	fputs("......",dosya);															

	fclose(dosya);
}

