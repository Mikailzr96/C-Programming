#include <stdio.h>
#include <locale.h>

#define		SIZE		10

int main()
{
	setlocale(LC_ALL, "Turkish");


	int a[SIZE] = { [3] = 7,[5] = 2 };		// 3.İndise 7, 5.İndise 2 değerini atıyor.Geri kalan indisler 0 oluyor.


	for (int i = 0; i < SIZE; i++)
		printf("A[%d) = %d \n",i, a[i]);








}