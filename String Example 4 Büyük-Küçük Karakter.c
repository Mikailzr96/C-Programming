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


	for (i = 0; arr[i] != '\0'; i++) {
		if (arr[i] >= 'A' && arr[i] <= 'Z')
			putchar(arr[i] + 32);
		else if (arr[i] >= 'a' && arr[i] <= 'z')
			putchar(arr[i] - 32);
		else
			putchar(arr[i]);
	}
}
