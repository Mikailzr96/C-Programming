#include <stdio.h>
#include <locale.h>
/*

		DİZİ - POİNTER FARKI -->

	1.Char türden dizilerde boyut belirlemek string ifadeleri sınırlandırır ancak pointer string ifadelerin böyle bir durum söz konusu değildir.
	1.Char türden dizilerdeki string ifadeler değiştirilebilirken pointer string ifadeleri const olduğundan ifade veya adresi değiştirilemez.

*/
int main()
{
	setlocale(LC_ALL, "Turkish");

	char arr[14] = "C Programming";
	arr[0] = 'R';

	for (int i = 0; i < 14; i++)
		printf("%c", arr[i]);

	printf("\n\n");

	const char* p = "C Programming";
	puts(p);
	p = "Web Programming";
	puts(p);
	p = "Embedded System Programming";
	puts(p);

	/* const olan *p olduğu için ifadelein adresi değişmiyor; değişen sadece string ifadeler. 
		Eğer --> 

		*p = 2; yazsaydık hata verirdi çünkü const olan *p'dir. 
		 
	*/
	
	


}