#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define		SIZE		100
/*

 	char* itoa( int deger, char* kaydedilecek_yer, int sayi_tabani )

	C'de, int tipindeki değeri bir char dizisi üzerinde ASCII karakterlere çeviren fonksiyon.

*/


int main()
{
	int rakamla = 65;
	char onaltiliksistem[SIZE];
	char onluksistem[SIZE];
	char ikiliksistem[SIZE];
	_itoa(rakamla, onaltiliksistem, 16);	// 41
	_itoa(rakamla, onluksistem, 10);		// 65
	_itoa(rakamla, ikiliksistem, 2);		// 1000001
	
	printf("Sayı = %d\nOnaltılık Taban = %s \nOnluk Taban = %s \nİkilil Taban = %s \n",rakamla, onaltiliksistem, onluksistem, ikiliksistem);
}