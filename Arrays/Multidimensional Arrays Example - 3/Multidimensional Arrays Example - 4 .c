/*
	mxn boyutlarındaki bir matris elemanlarını tam sayı olarak kullanıcıdan isteyip A matrisini oluşturan ve daha sonra matris
	elemanlarını karekökleri B matrisinin ilgili elemanına atamak suretiyle B matrisi oluşturan programın akış diyagramını çizerek kodunu C veya C++ programlama dilinde yazınız.
	(m ve n kullanıcı tarafından girilecektir.)
*/
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "Turkish");

	float m, n, A[100][100], B[100][100];

	printf("Matrisin satır sayısını giriniz = ");
	scanf_s("%f", &m);
	printf("Matrisin sütun sayısını giriniz = ");
	scanf_s("%f", &n);

	for (int i = 0; i < m; i++)
	{
		printf("\n");
		for (int j = 0; j < n; j++)
		{
			printf("Matrisin %d.satır %d.sütün elemanını giriniz = ", i + 1, j + 1);
			scanf_s("%f", &A[i][j]);
		}
	}
	/*-----------------------------------------------------------------------------------------------------------------------------------------------*/
	printf("\n A MATRİSİ\n-----------\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf(" %.0f ", A[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			B[i][j] = pow(A[i][j], 1.0 / 2);
		}
		printf("\n");
	}
	/*-------------------------------------------------------------------------------------------------------------------------------------------------*/
	printf("\n B MATRİSİ\n-----------\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf(" %.2f ", B[i][j]);
		}
		printf("\n");
	}

	return 0;
}
