#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void memset1(void* vp, int c, size_t n);

int main()
{	
	int a[5] = { 1,2,3,4,5 };
	memset1(a, 0, sizeof(a));

	for (int i = 0; i < 5; i++)
		printf("%d ", a[i]);
}

void memset1(void* vp, int c, size_t n) {
	unsigned char* ps = vp;
	while (n--)
		*ps++ = (unsigned char)c;
	return vp;
}