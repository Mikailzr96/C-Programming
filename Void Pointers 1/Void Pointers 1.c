#include <stdio.h>

int main()
{

	int x = 20;
	char y = 'W';
	double z = 7.2;


	void* ptr = &x;
	printf("%d \n", *(int*)ptr);

	ptr = &y;
	printf("%c \n", *(char*)ptr);

	ptr = &z;
	printf("%.1f \n", *(double*)ptr);


}