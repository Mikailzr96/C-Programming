/*
	Klavyeden girilen bir sayýnýn %35'inin 1000'den büyük olup olmadýðýný ekrana yazdýran bir programýn akýþ diyagramýný çýkartýnýz ve 
	C++ kodunu yazýnýz. 	
*/
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	float X,islem;
	
	printf("Bir sayý giriniz = ");
	scanf("%f",&X);
	
	islem = ( X * 35 ) / 100;
	
	if( islem > 1000 )
	{
	printf("\n%.0f sayýsýnýn %%35'i ---> %.2f ve %.2f > 1000 \n",X,islem,islem);
	}
	else
	{
	printf("\n%.0f sayýsýnýn %%35'i ---> %.2f ve %.2f < 1000 \n",X,islem,islem);
	}
	return 0;	
}


