#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define			SIZE		100
int main()
{
	// strchr(const char* String,int Aranacak_Karakter) --> Bir karakteri string ifadenin içinde olup olmadığını kontrol eder.

	char arr[SIZE] = "Elektrik Elektronik Mühendisligi";

	char* p = strchr(arr, 'k');

	if (p == NULL)
		printf("Aranan karakter bulunumadı.\n\n");
	else
		printf("Aranan karakter bulundu.\n\n");

	printf("Aranan karakter baştan %d.sıradadır. \n", (p - arr) + 1);

	printf("\n\n----------------------------------------------------------------------------------------------------\n");

	// strrchr(const char* String,int Aranacak_Karakter) --> strrchr'den tek farkı strchr karakter aramaya ilk karakterden;strrchr ise son karakterden başlar.

	char arr1[SIZE] = "Elektrik Elektronik Mühendisligi";

	char* p2 = strrchr(arr1, 't');

	if (p2 == NULL)
		printf("Aranan karakter bulunumadı.\n");
	else
		printf("Aranan karakter bulundu.\n");

}