#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

int main()
{
	char karakter[20];

	FILE* dosya = fopen("Deneme.txt", "r");


	
	while (fgets(karakter, 20, dosya) != NULL)		
		printf("%s", karakter);





	fclose(dosya);
}