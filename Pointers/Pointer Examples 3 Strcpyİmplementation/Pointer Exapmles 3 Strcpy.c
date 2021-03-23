#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char* strcpy1(char* dest, const char* source);
char* strcpy2(char* dest, const char* source);
char* strcpy3(char* dest, const char* source);

int main()
{
	char a1[20] = "Elektrik";
	char a2[20] = "Yazilim";

	strcpy1(a1, a2); puts(a1);
	strcpy2(a1, a2); puts(a1);
	strcpy3(a1, a2); puts(a1);
}

char* strcpy1(char* dest, const char* source) {
	char* p = dest;

	int i = 0; 
	while ((dest[i] = source[i]) != '\0')
	++i;

	return dest;
}
char* strcpy2(char* dest, const char* source) {
	char* p = dest;
	while ((*dest = *source) != '\0') 
		++dest, ++source;
	
	return dest;
}
char* strcpy3(char* dest, const char* source) {
	int i = 0; 
	char* p = dest;
	while (1) {
		dest[i] = source[i];
		if (dest[i] == '\0')
			break;
		i++;
	}
	return p;
}