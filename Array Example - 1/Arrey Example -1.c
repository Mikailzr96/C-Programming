#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
#define			SIZE		10
int main()
{
	setlocale(LC_ALL, "Turkish");

	// A DİZİSİNİN RASTGELE ÜRETİLEN DEĞERLERİNİ B DİZİSİNE ATAYAN PROGRAM -->

	srand(time(NULL));

	int A[SIZE], B[SIZE];

	for (int i = 0; i < SIZE; i++)
		A[i] = rand() % 50;

	for (int i = 0; i < SIZE; i++)
		printf("A[%d] = %d \n", i + 1, A[i]);

	printf("\n");

	for (int i = 0; i < SIZE; i++)
		B[i] = A[i];

	for(int i=0; i<SIZE; i++)
		printf("B[%d]  =%d \n",i+1,B[i]);









}