#include <stdio.h>
#include <locale.h>

#define		SIZE		100

int sesli_harf_sayisi(const char* ps) {

	int counter = 0;

	while (*ps != '\0') 
	{
		switch (*ps)
		{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			++counter;
		}
		*ps++;				// Dizinin bir sonraki karaterini kontrol etmek i�in artiriliyor.  
	}
	return counter;
}

int main()
{
	setlocale(LC_ALL, "Turkish");

	char arr[SIZE];

	printf("Bir c�mle giriniz --> ");
	gets(arr);
	
	printf("\nC�mledeki sesli harf sayisi --> %d ", sesli_harf_sayisi(arr));
}
