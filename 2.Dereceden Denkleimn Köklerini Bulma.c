#include <stdio.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	
	int a,b,c;
	float delta,kok1,kok2;
	
	printf("\tAx2 + Bx + C = 0 \nDenklemi i�in A - B - C de�elerini giriniz = ");
	scanf("%d %d %d",&a,&b,&c);
	
	delta = (pow(b,2)) - 4*a*c;
	
	kok1 = (-b + sqrt(delta)) / 2*a;
	kok2 = (-b - sqrt(delta)) / 2*a;
	
	printf("\nDenklem = %dx2 + %dx + %d = 0\n",a,b,c);
	
	if( delta > 0 )
	 {
	 	printf("Denklemin iki reel k�k� vard�r.Denklemin K�kleri \n%.2f \n%.2f \n",kok1,kok2);
	 	
	 }
	 else if( delta == 0 )
	 {
	 	printf("Denklemin bir k�k� vard�r.Denklemin K�k� \n%.2f \n",kok1);
	 }
	 else
	 {
	 	printf("Denklemin reel k�k� yoktur !! ");
	 }
	 
	
	
	
	
	
	
	
	
	
	
	
}
