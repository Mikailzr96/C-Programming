/*
	Klavyeden girilen bir say�n�n %35'inin 1000'den b�y�k olup olmad���n� ekrana yazd�ran bir program�n ak�� diyagram�n� ��kart�n�z ve 
	C++ kodunu yaz�n�z. 	
*/
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	float X,islem;
	
	printf("Bir say� giriniz = ");
	scanf("%f",&X);
	
	islem = ( X * 35 ) / 100;
	
	if( islem > 1000 )
	{
	printf("\n%.0f say�s�n�n %%35'i ---> %.2f ve %.2f > 1000 \n",X,islem,islem);
	}
	else
	{
	printf("\n%.0f say�s�n�n %%35'i ---> %.2f ve %.2f < 1000 \n",X,islem,islem);
	}
	return 0;	
}


