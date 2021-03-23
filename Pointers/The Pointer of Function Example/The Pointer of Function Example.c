#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef int(*fptr)(int, int);
int toplama(int x, int y);
int cikarma(int x, int y);
int carpma(int x, int y);
int bolme(int x, int y);
int result(fptr f, int x, int y);

int main()
{
	int n1, n2, choice;
	fptr fa[] = { &toplama,&cikarma,&carpma,&bolme };
	printf("İki sayi giriniz ");
	scanf("%d %d", &n1, &n2);

	printf("1-Toplama\n2-Cikarma\n3-Carpma\n4-Bolme\n");
	scanf("%d", &choice);

	int sonuc = result(fa[choice - 1], n1, n2);
	printf("%d \n", sonuc);
}

int toplama(int x, int y) {
	return x + y;
}
int cikarma(int x, int y) {
	return x - y;
}
int carpma(int x, int y) {
	return x * y;
}
int bolme(int x, int y) {
	if (y != 0)
		return x / y;
	else
		exit(EXIT_FAILURE);
}
int result(fptr f, int x, int y) {
	int rest = f(x, y);
	return rest;
}