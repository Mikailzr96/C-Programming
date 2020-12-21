#include <stdio.h>
#include <locale.h>

#define		SIZE		10

int arrey_max_value(const int* p1, int len);
int arrey_max_valeu_with_pointer(const int* p2, int len);

int main()
{
	setlocale(LC_ALL, "Turkish");

	int a[SIZE] = { 125,19,3800,1,-56,2758,10000,89,933,0 };

	int* ptr1 = arrey_max_valeu_with_pointer(a, SIZE);
	
	printf("Max Value --> %d \n", arrey_max_value(a, SIZE));
	printf("Max Value --> %d \n", *ptr1);

}

int arrey_max_value(const int* p1, int len) {

	int max = *p1;		// max = *p --> *p = a[0];

	for (int i = 1; i < len; ++i) {
		if (p1[i] > max) {
			max = p1[i];
		}
	}
	return max;
}

int arrey_max_valeu_with_pointer(const int* p3, int len) {
	int* ptrmax = (int*)p3;

	for (int i = 0; i < len; i++) {
		if (p3[i] > *ptrmax)
			ptrmax = (int*)p3 + i;
	}
	return ptrmax;
}
