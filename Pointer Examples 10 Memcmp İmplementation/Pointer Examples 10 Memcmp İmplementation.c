#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int memcmp1(const void* vp1, const void* vp2,size_t n);

int main()
{
	int a[5] = { 1,2,3,4,5 };
	int b[5] = { 6,7,8,9,10 };

	int result = memcmp1(a, b, sizeof(a));
	
	if (result > 0)
		printf("Birinci buyuk \n");
	else if (result < 0)
		printf("İkinci buyuk \n");
	else
		printf("Esit \n");
}
int memcmp1(const void* vp1, const void* vp2, size_t n) {
	const char* p1 = vp1;
	const char* p2 = vp2;

	while (n--)
		if (*p1 != *p2)
			return *p1 - *p2;
		else
			++p1, ++p2;

	return 0;
}