#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	Birlikler de yapılar gibi aynı yöntemle kullanılır ve çalışırlar. Fakat tek fark ise burada bütün değişekenler hafızada aynı noktada 
	buluşur. Grekeli hafıza sadece en büyük değişken için ayrılmıştır. Diğer tüm değişkenler aynı hafıza yerini paylaşmak zorundadır.
	Herhangi bir zamanda üyelerinden en fazla bir tanesinin bir değer tutacağını bildiğimiz zamanlarda, bellekten tasarruf etmek 
	amacıyla genelde birlikler kullanılır.
*/
struct yap {
	int id1;
	int id2;
	int id3;
	double dd;
	char cd1;
	char cd2;
	char cd3;
} yd;
union bir {
	int id1;
	int id2;
	int id3;
	double dd;
	char cd1;
	char cd2;
	char cd3;
} bd;

int main(void)
{
	printf("Yapı boyutu: %d \n", sizeof(yd));
	printf("Bileşim boyutu: %d \n", sizeof(bd));

/*
	Aynı elemanlara sahip olmalarına rağmen yapıya eklenen elemanların yapı boyutunu artırdığı, 
	bileşim elemanlarının ise sadece en büyük olanının bileşim boyutunu belirlediği görülür.
*/

}