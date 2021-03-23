#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

#define		SIZE		7

int main()
{
	setlocale(LC_ALL, "Turkish");

	int A[SIZE];
	int number, counter = 0,toplam = 0;

	srand((unsigned int)time(NULL));

	for (int i = 0; i < SIZE; i++)
		A[i] = rand() % 10;

	for (int i = 0; i < SIZE; i++)
		printf("A[%d] = %d \n", i, A[i]);

	printf("\n");
	printf("Hangi sayının katını bulmak istiyorsunuz ? ");
	scanf_s("%d", &number);

	for (int i = 0; i < SIZE; i++)
		if (A[i] % number == 0)
		{
			counter++;
			toplam += A[i];
		}

	printf("\n%d sayısının katı dizide %d kere var ve bu sayıların toplamı ---> %d \n", number, counter,toplam);
}
