#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	double sayi,sayi1;
	
	printf("L�tfen bir say� giriniz = ");
	scanf("%f",&sayi);
	
	printf("Ayn� say�y� birdaha giriniz = ");
	scanf("%lf",&sayi1);
	

	printf("\n%%f ile al�nan say� = %.2f \n",sayi);
	printf("\n%%lf ile al�nan say� = %.2f \n",sayi1);
	
	
	
	// Double veri tiplerinde kullan�c�dan veri al�n�rken scanf("%lf,...) ile al�n�r. 
	

}

