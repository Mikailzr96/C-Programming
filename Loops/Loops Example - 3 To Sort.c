/*
	N adet tam sayýyý kullanýcýdan isteyip büyükten küçüðe sýralayan programýn akýþ diyagramýný çizerek kodunu yazýnýz. (N kullanýcý tarafýndan girilecektir.)
*/
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int N,temp;
    printf("Sayý adeti için,Lütfen N sayýsýný giriniz = ");
	scanf("%d",&N);
	
	int dizi[N];
	
	printf("\n");
	for(int i=1; i<=N; i++)
	{
		printf("%d.sayýyý giriniz = ",i);
		scanf("%d",&dizi[i]);
	}
	for(int i=1; i<=N; i++)
	{
		for(int j=1; j<=N; j++)
		{
			if( dizi[i] >= dizi[j] )
			{
				temp = dizi[i];
				dizi[i] = dizi[j];
				dizi[j] = temp;
			}
		}
	}
	
	printf("\nSayýlarýn büyükten küçüðe sýralanmasý ----> \n\n");
	
	for(int i=1; i<=N; i++)
	{
		printf("%d  ",dizi[i]);
	}	
	
	return 0;
}

