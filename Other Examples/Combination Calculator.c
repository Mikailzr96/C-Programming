#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	
	int n,r;
	float f1=1,f2=1,f3=1,k;
	
	printf("N sayýsýný giriniz = ");
	scanf("%d",&n);
	printf("R sayýsýný giriniz = ");
	scanf("%d",&r);
	for(int i=1; i<=n; i++)
	{
		f1 *= i;
		
		if( i<=r )					//								 n!
		{							//	Kombinasyon -->  C(n,r) = --------
			f2 *= i;				//							  r!(n-r)!
		}
		if( i<=n-r )
		{
			f3 *= i;
		}
	}
	k = f1 / ( f2 * f3 );
	
	printf("Sonuç = %.2f",k);
	
	
	
	
	
	
	
	
}
