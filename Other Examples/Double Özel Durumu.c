#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	double sayi,sayi1;
	
	printf("Lütfen bir sayý giriniz = ");
	scanf("%f",&sayi);
	
	printf("Ayný sayýyý birdaha giriniz = ");
	scanf("%lf",&sayi1);
	

	printf("\n%%f ile alýnan sayý = %.2f \n",sayi);
	printf("\n%%lf ile alýnan sayý = %.2f \n",sayi1);
	
	
	
	// Double veri tiplerinde kullanýcýdan veri alýnýrken scanf("%lf,...) ile alýnýr. 
	

}

