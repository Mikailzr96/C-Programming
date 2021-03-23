#include <stdio.h>
#include <locale.h>

#define		SIZE		100

int main()
{
	setlocale(LC_ALL, "Turkish");

	int i;
	char arr[SIZE];
	printf("Bir cümle giriniz --> ");
	gets(arr);

	int buyukharfsayisi = 0, kucukharfsayisi = 0, rakamsayisi = 0, ozelkaraktersayisi = 0;

	for (i = 0; arr[i] != '\0'; i++)
		if (arr[i] >= 65 && arr[i] <= 90)
			++buyukharfsayisi;
		else if (arr[i] >= 97 && arr[i] <= 122)
			++kucukharfsayisi;
		else if (arr[i] >= 48 && arr[i] <= 57)
			++rakamsayisi;
		else
			++ozelkaraktersayisi;

	printf("\nCümlede -->\n\n%d Büyük Harf \n%d Küçük Harf \n%d Rakam \n%d Özel Karakter bulunmaktadir.\n", buyukharfsayisi, kucukharfsayisi, rakamsayisi, ozelkaraktersayisi);
















}
