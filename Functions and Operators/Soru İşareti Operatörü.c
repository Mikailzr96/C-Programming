#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	/*
	
		? OPERAT�R� 
	   --------------
	
		(ko�ul) ? (ko�ul sa�lan�rsa) : (ko�ul sa�lanmazsa);
		
	*/
	
	int x = 20, y = 10;
	
	int buyuksayi;
	
	buyuksayi = x > y ? x : y;
	
	
	printf("B�y�k De�er = %d",buyuksayi);


}
