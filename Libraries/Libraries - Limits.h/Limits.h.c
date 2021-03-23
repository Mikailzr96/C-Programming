#include <stdio.h>
#include <locale.h>
#include <limits.h>

int main()
{
	setlocale(LC_ALL, "Turkish");

	printf("İNT alabileceği max değer --> %d \n", INT_MAX);
	printf("İNT alabileceği min değer --> %d \n", INT_MIN);

	printf("CHAR alabileceği max değer --> %d \n", CHAR_MAX);
	printf("CHAR alabileceği min değer --> %d \n", CHAR_MIN);

	printf("LONG alabileceği max değer --> %d \n", LONG_MAX);
	printf("LONG alabileceği min değer --> %d \n", LONG_MIN);


}