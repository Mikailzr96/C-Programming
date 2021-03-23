
// Kütüphane çaðýrýlýr ve içerdiði fonksiyonlar yazýlýr -->
/*
-Çaðýrýlýrken " " kullanýlýr.
*/

#include "My_Library.h"

int faktoriyel(int x) {

	int fakt = 1;

	while (x)
		fakt *= x--;
	return fakt;


}