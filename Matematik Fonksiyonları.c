#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int sayi = 15, sayi3 = -1.0;
	
	float sayi2,kokalma,usalma,logaritma,mutlakdeger,asagiyuvarlama,yukariyuvarlama,sinx,cosx;
	
	sayi2 = 7.5;

	
	kokalma = sqrt(sayi);			// Sqrt - Karek�k alma fonksiyonudur.

	usalma = pow(sayi,2);			// Pow - �s alma fonksiyonudur.
	
	logaritma = log(sayi);			// Log - Logaritma(ln) fonksiyonudur.
	
	mutlakdeger = fabs(sayi3);		// Fabs - Mutlak de�er fonksiyonudur.
	
	sinx = sin(sayi3);				// Sin - Sin�s fonksiyonudur.

	cosx = cos(sayi3);				// Cos - Cosin�s fonksiyonudur.
	
	asagiyuvarlama = floor(sayi2);	// Floor - A�a��ya yuvarlama i�in kullan�lan fonksiyondur.
	
	yukariyuvarlama = ceil(sayi2);	// Ceil - Yukar� yuvarlama i�in kullan�lan fonksiyondur.
	
	printf("Say� = 15\n\nK�k Alma ---> %.2f \n�s Alma ---> %.2f\nLogaritma ---> %.2f \n\n",kokalma,usalma,logaritma);
	printf("\nSay� = -1\n\nMutlak De�er ---> %.2f \nSin�s ---> %.2f \nCosin�s ---> %.2f\n\n",mutlakdeger,sinx,cosx);
	printf("\nSay� = 7.5\n\nA�a�� Yuvarlama ---> %.2f \nYukar� Yuvarlama ---> %.2f \n\n",asagiyuvarlama,yukariyuvarlama);
	
}

