#include <stdio.h>
#include <locale.h>
#include <string.h>
#define			SIZE		100
int main()
{
	setlocale(LC_ALL, "Turkish");

	int i;
	char arrey[SIZE];

	printf("Bir cümle giriniz --> ");
	gets(arrey);

	int counter = 1;

	for (i = 0; arrey[i] != '\0'; i++)
		if (arrey[i] == ' ')
			++counter;

	printf("\nCümlede %d adet kelime vardir", counter);


}
