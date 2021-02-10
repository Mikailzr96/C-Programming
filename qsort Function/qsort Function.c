#include <stdio.h>
#include <stdlib.h>
#define		SIZE	9
/*
	qsort - Bir dizinin elemanlarını sıralar.

	void qsort(void *base, size_t num, size_t size, int (*compar)(const void*, const void*));


	base:	Sıralanacak dizinin ilk elemanının adresini gösterir.

	num:	Base parametresi ile gösterilen dizinin eleman sayısını gösterir.

	size:	Base parametresi ile gösterilen dizinin her bir elemanının boyutunu gösterir.

	compar: Dizinin iki elemanını karşılaştıran fonksiyonun işaretçisidir.


*/

int cmp(const void* vp1, const void* vp2) {
	return(*(const int*)vp1 - *(const int*)vp2);
}

int main()
{
	int a[SIZE] = { 1,9,5,8,4,2,7,6,3 };

	qsort(a, SIZE, sizeof(int),&cmp);

	for (int i = 0; i < SIZE; i++)
		printf("%d ", a[i]);
}