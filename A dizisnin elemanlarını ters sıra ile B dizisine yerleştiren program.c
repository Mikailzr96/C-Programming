#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int n;
	printf("Eleman sayýsýný giriniz = ");
	scanf("%d",&n);
	
	int a[n],b[n];
	
	for(int i=1; i<=n; i++)
	{
		printf("Dizinin %d.elemanýný giriniz = ",i);
		scanf("%d",&a[i]);
	}
	for(int i=1; i<=n; i++)
	{
		b[i] = a[n+1 - i];
		printf("Dizinin %d.elemaný = %d\n",i,b[i]);
	}
	
	/* Bir "i" deðiþkeni 1'den N'e kadar artarken, "j" deðiþkeni de ayný oranda azalýyorsa aralarýnda " j = N + 1 -i " iliþkisi vardir */
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
