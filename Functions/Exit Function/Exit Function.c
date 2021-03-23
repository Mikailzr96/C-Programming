#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
	void exit(int status);		0 BAŞARILI [exit(0) ~ exit(EXIT_SUCCESS)] | 1 BAŞARISIZ [exit(1) ~ 	exit(EXIT_FAILURE)]

*/

void F1() {
	printf("1.Fonksiyon baslatıldı...\n");
	return;
}
void F2() {
	printf("2.Fonksiyon baslatıldı...\n");
	exit(0);
}
int main() {
	
	F1();				// 1.Fonksiyon Çalıştı. "Exit()" ile "return" farkı, exit programı ;return ise fonksiyonu sonlandırır.
	F2();				// 2.Fonkisyon çalıştı ve çıkış yapıldı.(f2 --> exit(0); )
	printf("Programdan çıkış yapıldığı için burası okunmaz !! \n ");


}
