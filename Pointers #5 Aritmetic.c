#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int a[] = { 2,4,6,8,10 };
	
	int *p1 = a + 2;			// ( *p1 = a + 2 ) = ( *p1 = &a[2] ) = ( *p1 = 6 )  
	int *p2 = &a[2] + 2;		// ( *p2 = &a[2] + 2 ) = ( *p2 = &a[2+2] ---> *p2 = &a[4] ) = ( *p2 = 10 )  
	int *p3 = &a[4] - 1;		// ( *p3 = &a[4] - 1 ) = ( *p3 = &a[4-1] ---> *p3 = &a[3] ) = ( *p3 = 8 )
	
	int toplam = *p1 + *p2;		// Ýki pointer toplanabilir.
	int fark = *p1 - *p3;		// Ýki pointer birbirinden çýkarýlabilir.
	
	printf("*p1 = %d \n", *p1);
	printf("*p2 = %d \n", *p2);
	printf("*p3 = %d \n", *p3);
	
	printf("*------------------------------------------------------------------------------*\n");
	
	printf("*p1 + *p2 = %d \n", toplam);
	printf("*p1 - *p3 = %d \n", fark);
	
	printf("*------------------------------------------------------------------------------*\n");
	if( *p1 < *p2 )			//	Ýki pointer karþýlaþtýrýlabliir. 
		printf("*p1 < *p2 \n");
	else
		printf("*p1 > *p2 \n");
	
}
