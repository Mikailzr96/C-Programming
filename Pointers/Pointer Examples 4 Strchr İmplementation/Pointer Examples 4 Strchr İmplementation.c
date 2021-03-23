#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char* strchr1(const char* s, int c);
char* strchr2(const char* s, int c);
char* strchr3(const char* s, int c);

int main()
{
	char* presult = strchr1("Sonbahar", 'n');
	if (presult == NULL)
		printf("Aranan karakter bulunamadi \n");
	else
		printf("Aranan karakter bulundu \n");
}

char* strchr1(const char* s, int c) {
	while (*s != '\0' && *s != c)
		++s;

	if (*s == c)
		return (char*)s;
	else
		return NULL;
}
char* strchr2(const char* s, int c) {
	while (*s != (char)c)
		if (!*s++)
			return NULL;

	return (char*)s;
}
char* strchr3(const char* s, int c) {
	for (; *s != '\0'; ++s)
		if (*s == c)
			return (char*)s;

	return NULL;
}