#include <stdio.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	
	double derece,sinx,cosx,tanx;
	
	printf("Derece giriniz = ");
	scanf("%lf",&derece); 			
	
	sinx = sin(derece);
	cosx = cos(derece);
	tanx = tan(derece);
	
	printf("\nSinx = %.2f \n",sinx);
	printf("Cosx = %.2f \n",cosx);
	printf("Tanx = %.2f \n",tanx);
	
	
	/* 
		Ters Trigonometrik Fonksiyonlar		-	Hiperbolik Fonksiyonlar 	-	Ters Hiperbolik Fonksiyonlar
		Asin(x) 								sinh(x)							asinh(x)
		Acos(x)									cosh(x)							acosh(x)
		Atan(x)									tanh(x)							atanh(x)
	*/
	
	
	
	
}

