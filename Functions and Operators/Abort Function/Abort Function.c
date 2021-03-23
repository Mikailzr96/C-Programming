#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
* 
	void abort(void);  --> Olağan dışı sonlandırma ile aktif programdan çıkış yapar

*/

void F1() {
	printf("1.Fonksiyon baslatıldı...\n");
	return;
}
void F2() {
	printf("2.Fonksiyon baslatıldı...\n");
	return;
}
int main() {


	printf("Direkt programdan çıkış yapıldı --> \n");
	abort();

	atexit(F1);			  // Program 23.satırda son bulur.
	atexit(F2);			  // Program 23.satırda son bulur.
}
