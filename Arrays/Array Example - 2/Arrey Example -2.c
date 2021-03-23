#include <stdio.h>
#include <locale.h>

#define		SIZE 5

int main()
{
	setlocale(LC_ALL, "Turkish");

	int a[SIZE], b[SIZE],n;

	printf("Dizinin eleman sayısını giriniz = ");
	scanf_s("%d", &n);
	printf("\n");
	for (int i = 1; i <= n; i++)
	{
		printf("Dizinin %d.elemanını giriniz = ", i);
		scanf_s("%d", &a[i]);
	}printf("\n");
	for (int i = 1; i <= n; i++)
	{
		b[i] = a[n + 1 - i];
		printf("Dizinin %d.elemanı = %d\n", i, b[i]);
	}

	/* Bir "i" değişkeni 1'den N'e kadar artarken, "j" değişkeni de aynı oranda azalıyorsa aralarında " j = N + 1 -i " ilişkisi vardir */

}