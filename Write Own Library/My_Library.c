
// K�t�phane �a��r�l�r ve i�erdi�i fonksiyonlar yaz�l�r -->
/*
-�a��r�l�rken " " kullan�l�r.
*/

#include "My_Library.h"

int faktoriyel(int x) {

	int fakt = 1;

	while (x)
		fakt *= x--;
	return fakt;


}