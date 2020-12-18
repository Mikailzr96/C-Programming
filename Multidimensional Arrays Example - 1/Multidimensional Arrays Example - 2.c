#include <stdio.h>
#include <locale.h>

#define			SATIR		4
#define			SUTUN		5

int main()
{
	setlocale(LC_ALL, "Turkish");
	/*
			0	1	2	3
			1	2	3	4	
			2	3	4	5	
			3	4	5	6	
			4	5	6	7	
	*/	
	int A[SATIR][SUTUN];

	for (int i = 0; i < SATIR; i++)
	{
		for (int j = 0; j < SUTUN; j++)
		{
			A[i][j] = i + j;
		}
	}

	for (int i = 0; i < SATIR; i++)
	{
		for (int j = 0; j < SUTUN; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}

}