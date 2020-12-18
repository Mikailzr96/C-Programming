/*
	1'den N'e kadar (N dahil) sayýlar içerisinde dýþarýdan girilen X tam sayýsý tam olarak bölünebilen sayýlarý sayan 
	ve listeleyen bir programýn akýþ diyagramýný çýkartýnýz ve C++ kodunu yazýnýz.
*/
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int N,X;
	
	printf("1 - N arasýndaki sayýlarý için \nLütfen N sayýsýný giriniz = "); 
	scanf("%d",&N);
	printf("\nKatlarýný bulmak istediðiniz sayý için \nLütfen X sayýsýný giriniz = ");
	scanf("%d",&X);

	while( N <= 0 )
	{
		printf("\nN sayýsý negatif olamaz! Lütfen pozitif bir sayý giriniz =  \n");
		scanf("%d",&N);
	}
	while( X <= 0 )
	{
		printf("\nX sayýsý negatif olamaz! Lütfen pozitif bir sayý giriniz =  \n");
		scanf("%d",&X);
	}
	printf("\n");
	for(int i=1; i<=N; i++)
	{
		if( i % X == 0 )
		{
			printf("%d \n",i);
		}
	}
	return 0;	
}

