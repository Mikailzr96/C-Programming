#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Turkish");
	
	
	int a[] = { 2,4,6,8,10 };
	
	int *ptr = a;		// Dizinin 0.elemanýný pointere atamak.
	
	int *ptr1 = &a[0];	// Dizinin 0.elemanýný pointere atamanýn farklý bir gösterimi.
	
	printf("%d \n", *ptr);
	printf("%d \n", *ptr1);
	
 	*ptr = 125;			// Dizinin 0.elemanýndeki deðeri deðiþtirmek. 
	
	printf("%d \n", a[0]);

}
