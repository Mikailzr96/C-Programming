#include <stdio.h>
#include <locale.>

#define			SATIR		3
#define			SUTUN		3


int main()
{
	setlocale(LC_ALL, "Turkish");

	int A[SATIR][SUTUN], B[SATIR][SUTUN];

	printf("A matrisinin değerlerini giriniz. \n\n");

	for (int i = 0; i < SATIR; i++)
	{
		for (int j = 0; j < SUTUN; j++)
		{
			printf("%d.satır %d.sütun --> ", i, j);
			scanf_s("%d", &A[i][j]);
		}printf("\n");
	}
	printf("B matrisinin değerlerini giriniz. \n\n");

	for (int i = 0; i < SATIR; i++)
	{
		for (int j = 0; j < SUTUN; j++)
		{
			printf("%d.satır %d.sütun --> ", i, j);
			scanf_s("%d", &B[i][j]);
		}printf("\n");
	}
	printf("\nA Matrisi --> \n\n");

	for (int i = 0; i < SATIR; i++)
	{
		for (int j = 0; j < SUTUN; j++)
		{
			printf("%d ", A[i][j]);
		}
	printf("\n");
	}
	printf("\nB Matrisi --> \n\n");

	for (int i = 0; i < SATIR; i++)
	{
		for (int j = 0; j < SUTUN; j++)
		{
			printf("%d ", B[i][j]);
		}
		printf("\n");
	}
	printf("\nA + B --> \n\n");
	for (int i = 0; i < SATIR; i++)
	{
		for (int j = 0; j < SUTUN; j++)
		{
			printf("%d ", A[i][j] + B[i][j]);
		}
		printf("\n");
	}
	printf("\nA - B --> \n\n");
	for (int i = 0; i < SATIR; i++)
	{
		for (int j = 0; j < SUTUN; j++)
		{
			printf("%d ", A[i][j] - B[i][j]);
		}
		printf("\n");
	}






}