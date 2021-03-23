#include <stdio.h>
#include <locale.h>

#define		SATIR		3
#define		SUTUN		3

int main()
{
	setlocale(LC_ALL, "Turkish");
	
	int A[SATIR][SUTUN];

	for (int i = 0; i < SATIR; i++)
	{
		for (int  j = 0; j < SUTUN; j++)
		{
			printf("Matrisin %d.satır %d.sütun değerini giriniz = ", i, j);
			scanf_s("%d", &A[i][j]);
		}printf("\n");
	}
	printf("\nMATRİS ---> \n\n");

	for (int i = 0; i < SATIR; i++)
	{
		for (int j = 0; j < SUTUN; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
}
