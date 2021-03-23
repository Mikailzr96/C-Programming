#include <stdio.h>
#include <locale.h>

void CallbyValue(int a,int b) {
	int temp = a;
	a = b;
	b = temp;
}

void CallbyReferance(int *a,int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	setlocale(LC_ALL, "Turkish");

	int sayi1 = 7, sayi2 = 5;

	printf("1.Sayý = %d ve 2.Sayý = %d \n\n\n", sayi1, sayi2);
/*----------------------------------------------------------------------------------------------------------------*/
	
	CallbyValue(sayi1, sayi2);
	printf("Call by Value --> \n\n");

	printf("1.Sayý = %d ve 2.Sayý = %d \n\n\n", sayi1, sayi2);

/*----------------------------------------------------------------------------------------------------------------*/
	
	CallbyReferance(&sayi1, &sayi2);
	printf("Call by Referance --> \n\n");

	printf("1.Sayý = %d ve 2.Sayý = %d \n\n", sayi1, sayi2);












}
