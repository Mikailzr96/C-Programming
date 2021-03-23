/*
	1'den N'e kadar (N dahil) say�lar i�erisinde d��ar�dan girilen X tam say�s� tam olarak b�l�nebilen say�lar� sayan 
	ve listeleyen bir program�n ak�� diyagram�n� ��kart�n�z ve C++ kodunu yaz�n�z.
*/
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int N,X;
	
	printf("1 - N aras�ndaki say�lar� i�in \nL�tfen N say�s�n� giriniz = "); 
	scanf("%d",&N);
	printf("\nKatlar�n� bulmak istedi�iniz say� i�in \nL�tfen X say�s�n� giriniz = ");
	scanf("%d",&X);

	while( N <= 0 )
	{
		printf("\nN say�s� negatif olamaz! L�tfen pozitif bir say� giriniz =  \n");
		scanf("%d",&N);
	}
	while( X <= 0 )
	{
		printf("\nX say�s� negatif olamaz! L�tfen pozitif bir say� giriniz =  \n");
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

