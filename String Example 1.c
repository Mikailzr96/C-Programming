#include <stdio.h>
#include <locale.h>

#define			SIZE			100

int main()
{
	setlocale(LC_ALL, "Turkish");
	

	char arr[SIZE];
	printf("Bir kelime giriniz --> ");
	scanf("%s", arr);

	int lenght = 0;
	for (int i = 0; arr[i] != '\0'; ++i)
		++lenght;

	for (int i = 0; i < lenght / 2; ++i) 
	{
		char temp = arr[i];
		arr[i] = arr[lenght - 1 - i];
		arr[lenght - 1 - i] = temp;
	}

	puts(arr);


}
