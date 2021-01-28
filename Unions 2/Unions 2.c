#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

union bir {
	int id;
	double dd;
	char cd;
} bd;

int main()
{
	bd.id = 21;
	bd.cd = 'A';

	printf("%d %c \n", bd.id, bd.cd); /* 1 */

	bd.id = 127;
	printf("%d %c \n", bd.id, bd.cd); /* 2 */

	bd.dd = 34.75;
	printf("%d %.2f \n", bd.id, bd.dd);   /* 3 */

	/*
	Program, 1 sayısı ile gösterilen işlem satırında bir bileşiminde yer alan cd değişkeninin, 
	2 sayısı ile gösterilen işlem satırında id değişkeninin ve 
	3 sayısı ile gösterilen işlem satırında dd değişkeninin değerini normal olarak ekrana yazar.
	Aynı işlem satırlarında bahsi geçen değişkenler dışında kalan değerleri istendiği şekilde ekrana yazmaz,
	çünkü aynı bileşim içinde yer alan değişkenlerden aynı anda sadece bir tanesi ayrılan bellek bölgesini kullanabilir.
	Bu nedenle, sadece en son olarak atama yapılan bileşim değişkeni ekrana normal olarak yazılabilir.
	*/


}