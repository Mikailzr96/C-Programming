#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int n;
	printf("Eleman say�s�n� giriniz = ");
	scanf("%d",&n);
	
	int a[n],b[n];
	
	for(int i=1; i<=n; i++)
	{
		printf("Dizinin %d.eleman�n� giriniz = ",i);
		scanf("%d",&a[i]);
	}
	for(int i=1; i<=n; i++)
	{
		b[i] = a[n+1 - i];
		printf("Dizinin %d.eleman� = %d\n",i,b[i]);
	}
	
	/* Bir "i" de�i�keni 1'den N'e kadar artarken, "j" de�i�keni de ayn� oranda azal�yorsa aralar�nda " j = N + 1 -i " ili�kisi vardir */
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
