#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define         SIZE        4
/*

    Src parametresi ile gösterilen bellek bölgesindeki karakterleri, n parametre değeri kadar uzunlukta, dest parametresindeki
    bellek bölgesine kopyalar.

    void* memcpy(void *dest, const void *src, size_t n);

        
    dest:   Src parametresindeki verilerin kopyalanacağı belleği gösteren işaretçidir.

    src:    Dest parametresine kopyalanacak karakterlerin bellek başlangıcını gösteren bir işaretçidir.

    n:      Kopyalanacak maksimum karakter sayısıdır.

*/
int main()
{
    char source[30] = "Gömülü Yazılım";
    char dest[30];

    memcpy(dest, source, strlen(source) + 1);

    puts(source);
    puts(dest);

    printf("\n");

	int source1[] = { 1,2,3,4 };
	int dest1[4];

	memcpy(dest1, source1, sizeof(int) * SIZE);

	for (int i = 0; i < SIZE; i++)
		printf("%d ", source1[i]);

	printf("\n");

	for (int i = 0; i < SIZE; i++)
		printf("%d ", dest1[i]);

   
}
