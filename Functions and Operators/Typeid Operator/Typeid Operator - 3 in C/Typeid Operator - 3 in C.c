#include <stdio.h>
#include <locale.h>

void matris1(int(*p)[3], int size) {

	for (int i = 0; i < size; i++)
		for (int j = 0; j < 3; j++)
			scanf_s("%d", &p[i][j]);
}
void matris2(const int (*p)[3],int size) {

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	setlocale(LC_ALL, "Turkish");

	// &a[0] için  ---> int (*)[3] biçiminde olmalı. --> (typeid(&a[0]).name()) operatörü ile bulduk.
	// int (*p)[3] = &a[0];

	int a[3][3];

	matris1(a, 3);
	matris2(a, 3);
}