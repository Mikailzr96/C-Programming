#define CRT_SEVURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
char* strpbrk1(const char* p1, const char* p2);

int main()
{
	char a1[20] = "Nvidia";
	char a2[20] = "mXv";

	char* presult = strpbrk1(a1, a2);
	if (presult == NULL)
		printf("Aranan karakter kumesi bulunamadi. \n");
	else
		printf("Aranan karakter bulundu. \n");
}

char* strpbrk1(const char* p1, const char* p2) {
	while (*p1 != '\0')
		if (strchr(p2, *p1++))
			return (char *)p1;

			return NULL;
}