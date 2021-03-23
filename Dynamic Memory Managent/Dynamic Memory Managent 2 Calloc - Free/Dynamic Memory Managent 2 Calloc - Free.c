#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*
	Calloc fonksiyonu ise bellek tahsisi yaparken malloc() fonksiyonu kullanır,farklı olarak ayırdığı bellek bölgesini sıfırlamaktatır.

	ip = malloc (10 * sizeof(int));
	ip = calloc (10, sizeof (int));
*/

int main()
{
	size_t size;
	printf("Dizi boyutunu giriniz --> ");
	scanf("%d", &size);

	int* ptr = calloc(size, sizeof(int));

	if (!ptr) {
		printf("Bellek yetersiz ! \n");
		return 0;
	}

	for (int i = 0; i < size; i++)
		printf("%d ", ptr[i]);

	free:(ptr);

}
