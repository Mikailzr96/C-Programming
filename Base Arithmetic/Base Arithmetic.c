#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Turkish");

	int A, N, B, K, T[99], S = 0;
	printf("	TABAN ARTİMETİĞİ 	\n\n");
	printf("Pozitif bir tam sayı giriniz  = ");
	scanf_s("%d", &A);
	printf("Hangi tabana dönüştürülecek -> ");
	scanf_s("%d", &N);

	while (A > N - 1)
	{
		B = (int)
			A / N;
		K = A % N;
		S++;
		T[S - 1] = K;
		A = B;
	}
	S++;
	T[S - 1] = B;

	printf("\n%d Tabanındaki karşılığı = ", N);

	for (int i = S - 1; i >= 0; i--)
	{
		printf("%d ", T[i]);
	}
}
