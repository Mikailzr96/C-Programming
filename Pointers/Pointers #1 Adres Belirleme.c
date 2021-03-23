#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");


	char* cprt = (char *)0x16F8A;		

	printf("Adres --> %p \n", cprt);

}
