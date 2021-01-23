/*
__LINE__ : Derlenmekte olan satırın numarasını taşıyan int bir değerdir.

__FILE__ : Derlenmekte olan dosyanın adını gösteren bir karakter dizisidir.

__DATE__ : Sistemin tarihini gösteren bir karakter dizisidir.

		   Genel yapısı : ay/gün/yıl

__TIME__ : Programın derleme başlangıcındaki zamanı gösteren bir karakter dizisidir.

		   Genel yapısı : Saat:Dakika:Saniye

__STDC__ : Eğer derleyici ANSI standardına uygun ise 1 olarak tanımlanır.
*/

#include <stdio.h>
#include <locale.h>


int main(void)
{
	setlocale(LC_ALL, "Turkish");

	int id;

	for (id = 0; id < 10; id++) printf("%d ", id + 1);

	printf("\nDerlenen dosya: %s\n", __FILE__);
	printf("Derlenen satır: %d\n", __LINE__);
	printf("Derleme tarihi: %s\n", __DATE__);
	printf("Derleme zamanı: %s", __TIME__);

	return  0;
}