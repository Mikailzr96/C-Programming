#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	void *malloc (size_t byte-sayısı);
	void free (void *p);
	malloc() fonksiyonu belleği tahsis ederken, free() fonksiyonu ise önceden tahsis edilmiş belleği boşa çıkarır


	Program, 40 byte'lık bir bellek tahsisi yapar ve bu belleğin başlangıç adresini bir char işaretçiye atar.
	cp işaretçisine bi rkarakter dizisi kopyalarve diziyi ekrana yazar. Sonra, free() fonksiyonunu kullanarak tahsis edilen belleği boşaltır.
*/

int main()
{
	char* cp = (char*)malloc(40);

	if (!cp) {
		printf("Bellek tahsis hatasÄ±!");
		exit(1);
	}

	strcpy(cp, "C Programlama");
	puts(cp);

	free(cp);

	return 0;
}