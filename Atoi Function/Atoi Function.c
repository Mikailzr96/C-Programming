#define    _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
	int atoi(const char *str); --> Str parametresi ile gösterilen karakter dizisini int bir değere çevirir.
	Fonksiyon, önce boşluk karakteri içermeyen ilk karakteri bulana kadar boşluk atlar. Daha sonra, bu karakterden başlayarak, int değer içeriğine 
	benzeyen karakterleri sayısal değerlere çevirir. Karakter dizisindeki son geçerli karakterden sonraki karakterler dikkate alınmaz.

	Örneğin plaka bilgisi 79SKR54 olan bir aracın plakasındaki sayısal değerleri alalım --> 
*/
int main()
{
	char arr[100];
	printf("Plakanizi giriniz : ");
	scanf("%s", &arr);
	int value1 = atoi(arr);
	int value2 = atoi(arr + 5);
	printf("Plaka bilgisindeki sayılar --> %d ve %d \n", value1, value2);

}