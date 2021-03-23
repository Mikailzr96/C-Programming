#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

#define		SIZE		8

int main()
{
	setlocale(LC_ALL, "Turkish");

	srand((unsigned int)time(NULL));

	int A[SIZE];

	for (int i = 0; i < SIZE; i++)
		A[i] = rand() % 10;

	for (int i = 0; i < SIZE; i++)
		printf("A[%d] = %d \n", i, A[i]);


	int min = A[0];
	int max = A[0];

	for (int i = 1; i < SIZE; i++)
		if (A[i] < min)
			min = A[i];

	for (int i = 1; i < SIZE; i++)
		if (A[i] > max)
			max = A[i];

	printf("\n");
	printf("Dizinin en küçük elemanı --> %d \n", min);
	printf("Dizinin en büyük elemanı --> %d \n", max);






}