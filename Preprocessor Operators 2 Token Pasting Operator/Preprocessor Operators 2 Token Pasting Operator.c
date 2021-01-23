#include <stdio.h>

#define		concat(x1,x2)		x1##x2 



int main()
{
	int DegerOku = 7;

	printf("%d", concat(Deger, Oku));		// DegerOku = 7 olduğundan ekrana 7 yazdı.

}