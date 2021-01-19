#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");


	char name[] = "C_PROGRAMMİNG";

	printf("%s", name);

	printf("\nSizeof --> %zu \n\n", sizeof(name));		// sizeof(name) = 14 çünkü karakter dizisi 13 harf + '\0' (NULL) karakteri = 14 oldu
	printf("\n\n");
/*----------------------------------------------------------------------------------------------------------------------------------*/
	
	char str[] = "Deneme";

	str[2] = 'N';

	printf("%s\n\n", str);

	printf("\n\n");
/*----------------------------------------------------------------------------------------------------------------------------------*/

	char isim[] = { 'M','İ','K','A','İ','L','\n' };

	printf("%s", isim);

	printf("\n\n");
}