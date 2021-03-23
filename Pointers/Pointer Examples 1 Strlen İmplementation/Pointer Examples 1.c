#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

size_t strlen1(const char* p);
size_t strlen2(const char* p);
size_t strlen3(const char* p);

int main()
{
	printf("%d \n", strlen1("Yazilim"));
	printf("%d \n", strlen2("Yazilim"));
	printf("%d \n", strlen3("Yazilim"));
}

size_t strlen1(const char* p) {
	size_t counter = 0;

	for (int i = 0; p[i] != '\0'; i++)
		counter++;

		return counter;
}
size_t strlen2(const char* p) {
	size_t counter = 0;

	while (*p++)
		counter++;

	return counter;
}
size_t strlen3(const char* p) {
	char* ps = p;
	
	while (*p)
		p++;

	return p - ps;
}