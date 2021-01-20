#include <stdio.h>
#include <locale.h>
#include <string.h>

#define		SIZE		100

void sort(char *s);
int isanagram(char *s1,char *s2);
int main()
{
	setlocale(LC_ALL, "Turkish");
	
	char arr1[] = "etek";
	char arr2[] = "kete";

	printf("Birinci Kelime --> %s \n\n", arr1);
	printf("Ikinci Kelime --> %s \n\n", arr2);
	printf("Siralanmis Halleri --> \n");
	int result = isanagram(arr1, arr2);

	if (result)
		printf("\nAnagram\n");
	else
		printf("\nAnagram Degil\n");
}

void sort(char* s) {
	int lenght = strlen(s);		// isanagram fonksiyonundan gelen kelimelerin döngüde kullanmak için uzunluklari hesaplanir.
	char temp;
	int i,j;
	for (i = 0; i < lenght; i++)
		for (j = 1; j < lenght; j++)
			if (s[i] < s[j]) {
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
	puts(s);					// Kelimelerin siralanmis halini ekrana yazdirir
}

int isanagram(char* s1, char* s2) {
	int lenght1 = strlen(s1);	// Kelime uzunlugu hesaplanir.	
	int lenght2 = strlen(s2);	// Kelime uzunlugu hesaplanir 

	if (lenght1 != lenght2)		// Kelime uzunlugu esit degilse anagram degildir --> return 0;
		return 0;
								// Kelime uzunluklari eger esitse kelimeleri siralamak için sort fonksiyonuna gönderilir.
	sort(s1);			
	sort(s2);
	int i;
	for (i = 0; i < lenght1; i++)	// Eger siralama isleminden sonra kelimeler farkli ise return 0
		if (s1[i] != s2[i])
			return 0;

	return 1;				// Eger siralama isleminden sonra kelimeler ayni ise return 1
}
