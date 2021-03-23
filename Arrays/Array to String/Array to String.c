#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define			SIZE_ARRAY			9

int main()
{
	const char* const marmara_bolgesi_sehirleri[SIZE_ARRAY] = { "Istanbul","Edirne","Kocaeli","Sakarya","Kırklareli","Bursa","Yalova","Çanakkale","Bilecik" };
	char sehir_ismi[SIZE_ARRAY];
	int i, flag = 0;

	/*for (i = 0; i < SIZE_ARRAY; i++)
		puts(marmara_bolgesi_sehirleri[i]);
*/
	printf("Bir sehir ismi giriniz: ");
	scanf("%s", sehir_ismi);

	for (i = 0; i < SIZE_ARRAY; i++)
		if (_stricmp(marmara_bolgesi_sehirleri[i], sehir_ismi) == 0) {
			++flag;
			break;
		}

	if (flag)
		printf("Aradaıgınız sehir = %s dizinin %d.indisindedir. \n", sehir_ismi, i);
	else
		printf("Aradıgınız sehir %s dizide bulunamamıstır. \n", sehir_ismi);


}