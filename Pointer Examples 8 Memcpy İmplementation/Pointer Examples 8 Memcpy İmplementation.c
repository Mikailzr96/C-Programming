#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void* memcpy1(void* dest, const void* src, size_t n);

int main()
{
	int a[5] = { 1,2,3,4,5 };
	int b[5];
	
	memcpy1(b, a, sizeof(b));

	for (int i = 0; i < 5; i++)
		printf("%d ", b[i]);


}

void* memcpy1(void* dest, const void* src, size_t n) {
	char* ps = dest;
	const char* sp = src;
	while (n--)
		*ps++ = *sp++;

	return dest;
}

