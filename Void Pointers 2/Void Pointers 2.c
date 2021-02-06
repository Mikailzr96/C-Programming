#include <stdio.h>

int main()
{

	int a[5] = { 2,4,6,8,10 };

	void* ptr = a;

	for (int i = 0; i < 5; i++)
		printf("a[%d] = %d \n", i, *((int*)ptr + i));


}