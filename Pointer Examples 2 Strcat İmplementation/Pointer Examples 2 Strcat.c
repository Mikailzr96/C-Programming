#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char strcat1(char* dest, const char* source);
char strcat2(char* dest, const char* source);
char strcat3(char* dest, const char* source);

int main()
{
	char a1[20] = "Elektrik";
	char a2[20] = "Elektronik";
	
	strcat1(a1, a2);	puts(a1);
//	strcat2(a1, a2);	puts(a1);
//	strcat3(a1, a2);	puts(a1);
}
char strcat1(char* dest, const char* source) {
	size_t i, j;
	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; source[j] != '\0'; j++)
		dest[i + j] = source[j];
	dest[i + j] = '\0';

	return dest;
}
char strcat2(char* dest, const char* source) {
	char* p = dest;

	while (*p)
		++p;
	while (*p++ = *source++)
		;

	return p;
}
char strcat3(char* dest, const char* source) {
	strcpy(dest + strlen(dest), source);

	return dest;
}