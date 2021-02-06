#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define			SIZE		7
/*
	0 ---> Double
	1 ---> İnt 
	2 ---> Char
*/
void generic_printf_array(const void* ptr, size_t size, int type);

int main()
{
	int int_array[SIZE] = { 1,2,3,4,5,6,7 };
	double double_array[SIZE] = { 1.2,2.4,3.6,4.8,6.0,7.2,8.4 };
	char char_array[SIZE] = { 'Y','A','Z','I','L','I','M' };

	generic_printf_array(double_array, SIZE, 0);	printf("\n");
	generic_printf_array(int_array, SIZE, 1);		printf("\n");
	generic_printf_array(char_array, SIZE, 2);		printf("\n");
}

void generic_printf_array(const void* ptr, size_t size, int type) {

	for (int i = 0; i < size; i++) {
		switch (type) {
		case 0:
			printf("%.1f ", *((double*)ptr + i));
			break;
		case 1:
			printf("%d ", *((int*)ptr + i));
			break;
		case 2:
			printf("%c ", *((char*)ptr + i));
			break;
		}
	}
}