#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define		SIZE		100

int main()
{
	// char *strstr(const char * Aranacak_Yer,const char* Aranacak_Yazi) -> Bir yazı ifadesini başka bir yazi ifadesinin içinde arar.

	char arr1[SIZE] = "Elektrik Elektronik Mühendisligi";
	char arr2[SIZE] = "Elektronik";

	char* p = strstr(arr1, arr2);
	
	if (p == NULL)
		printf("\nAranan yazi bulunamadi.\n\n");
	else
		printf("\nAranan yazi bulundu.\n\n");

	printf("\n\n-------------------------------------------------------------------------------------\n");

	// strcmp --> İki karakteri ASCII'e karşılaştırıyor.Karşılaştırma işlemi birinci karakterden başlar ve birinci karakter daha büyükse diğerlerine bakmaz.

	char arr3[SIZE] = "ABC";
	char arr4[SIZE] = "abc";

	int result = strcmp(arr3, arr4);

	if (result > 0)
		printf("\nBirinci yazi daha buyuktur.\n\n");	// 
	else if (result < 0)
		printf("\nİkinci yazi daha buyuktur.\n\n");		// İkinci yazı daha büyük çünkü 'A' = 65 ve 'a' = 97 --> ('a' > 'A')
	else
		printf("\nİki yazi esittir.");

	printf("\n\n-------------------------------------------------------------------------------------\n");

	// stricmp --> strcmp'den farkı büyüklük,küçüklük ayırt etmeden karşılaştırma işlemi gerçekleştiriyor.

	char arr5[SIZE] = "ABC";
	char arr6[SIZE] = "abc";

	int result2 = _stricmp(arr3, arr4);

	if (result2 > 0)
		printf("\nBirinci yazi daha buyuktur.\n\n");	 
	else if (result2 < 0)
		printf("\nİkinci yazi daha buyuktur.\n\n");		
	else
		printf("\nİki yazi esittir.");

	printf("\n\n-------------------------------------------------------------------------------------\n");

}