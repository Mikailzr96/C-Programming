#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Turkish");
	
	
	int a[] = { 2,4,6,8,10 };
	
	int *ptr = a;		// Dizinin 0.eleman�n� pointere atamak.
	
	int *ptr1 = &a[0];	// Dizinin 0.eleman�n� pointere ataman�n farkl� bir g�sterimi.
	
	printf("%d \n", *ptr);
	printf("%d \n", *ptr1);
	
 	*ptr = 125;			// Dizinin 0.eleman�ndeki de�eri de�i�tirmek. 
	
	printf("%d \n", a[0]);

}
