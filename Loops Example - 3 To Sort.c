/*
	N adet tam say�y� kullan�c�dan isteyip b�y�kten k����e s�ralayan program�n ak�� diyagram�n� �izerek kodunu yaz�n�z. (N kullan�c� taraf�ndan girilecektir.)
*/
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int N,temp;
    printf("Say� adeti i�in,L�tfen N say�s�n� giriniz = ");
	scanf("%d",&N);
	
	int dizi[N];
	
	printf("\n");
	for(int i=1; i<=N; i++)
	{
		printf("%d.say�y� giriniz = ",i);
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
	
	printf("\nSay�lar�n b�y�kten k����e s�ralanmas� ----> \n\n");
	
	for(int i=1; i<=N; i++)
	{
		printf("%d  ",dizi[i]);
	}	
	
	return 0;
}

