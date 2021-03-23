#include <stdio.h>
#include <locale.h>
#include <ctype.h>
int main()
{
	setlocale(LC_ALL, "Turkish");

	int karakter1, karakter2,temp;

	printf("Bir karakter giriniz = ");
	karakter1 = getchar();

	temp= getchar();	// Enter karakteri için --> getchar(ENTER)

	printf("Yeniden bir krakter giriniz =");
	karakter2 = getchar();

	printf("Girdi --> %c Toupper Fonskiyon Çıktısı --> %c \n",karakter1, toupper(karakter1));	// Toupper -->  Karakteri büyük harf ile yazar.

	printf("Girdi --> %c Tolower Fonskiyon Çıktısı --> %c \n",karakter2, tolower(karakter2));	// Tolower --> Karakteri küçük harf ile yazar.





	




}