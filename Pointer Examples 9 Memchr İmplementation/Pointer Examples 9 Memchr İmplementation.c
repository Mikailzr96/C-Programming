#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void* memchr1(const void* p, int c, size_t n);

int main()
{
	char s1[100] = "C Programlama";
	char* presult = memchr1(s1, 'P', 100);
	if (presult)
		printf("Aranan karakter bulundu. \n");
	else
		printf("Aranan karakter bulunamadi. \n");
}

void* memchr1(const void* p, int c, size_t n) {
	char* ps = (char*)p;
	while (n--)
		if (*ps != c)
			++ps;
		else
			return ps;

	return NULL;

}