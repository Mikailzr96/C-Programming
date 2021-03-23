#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	/*
	
		? OPERATÖRÜ 
	   --------------
	
		(koþul) ? (koþul saðlanýrsa) : (koþul saðlanmazsa);
		
	*/
	
	int x = 20, y = 10;
	
	int buyuksayi;
	
	buyuksayi = x > y ? x : y;
	
	
	printf("Büyük Deðer = %d",buyuksayi);


}
