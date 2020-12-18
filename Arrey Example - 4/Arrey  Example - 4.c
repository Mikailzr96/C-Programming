#include <stdio.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL, "Turkish");
	int N;
	float a[100], T = 0, C = 1, HT = 0, T2 = 0, AO, GO, HO, KHO;

	printf("Eleman sayısını giriniz = ");
	scanf_s("%d", &N);
	printf("\n");
	for (int i = 1; i <= N; i++)
	{
		printf("Dizinin %d.elemanı giriniz = ", i);
		scanf_s("%f", &a[i]);
	}
	for (int i = 1; i <= N; i++)
	{
		T = T + a[i];
		C = C * a[i];
		HT = HT + 1 / a[i];
		T2 = T2 + a[i] * a[i];
		printf("Dizinin %d.elemanı = %.0f\n", i, a[i]);
	}
	AO = T / N;
	GO = pow(C, 1.0 * N);
	HO = N / HT;
	KHO = T2 / T;
	printf("\nAritmetik ortalama = %.2f \n", AO);
	printf("Geometrik ortalama = %.2f \n", GO);
	printf("Harmonik ortalama = %.2f \n", HO);
	printf("Kontraharmonik ortalama = %.2f \n", KHO);
}
