#include <stdio.h>
#include <locale.h>
#include <string.h>
#define			SIZE		100
int main()
{
	setlocale(LC_ALL, "Turkish");

	int i;
	char arrey[SIZE];

	printf("Bir c�mle giriniz --> ");
	gets(arrey);

	int counter = 1;

	for (i = 0; arrey[i] != '\0'; i++)
		if (arrey[i] == ' ')
			++counter;

	printf("\nC�mlede %d adet kelime vardir", counter);


}
