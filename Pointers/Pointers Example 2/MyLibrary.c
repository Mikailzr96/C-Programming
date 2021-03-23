#include <stdio.h>
#include "MyLibrary.h"


void dizi_yazdir1(const int(*p), int SIZE) {

	for (int i = 0; i < SIZE; i++) {
		printf("%d ", (p)[i]);
	}
}
void dizi_yazdir2(const int(*p), int SIZE) {

	int* ptr = p + SIZE;

	while (p < ptr) {
		printf("%d ", *p);
		p++;
	}
}
void dizi_yazdir3(const int(*p), int SIZE) {

	while (SIZE--)
		printf("%d ", *p++);

}