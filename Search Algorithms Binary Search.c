#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int ara,ilk = 0,son = 8,orta,k = 0,dizi[9] = {1,2,4,7,12,17,23,47,365};
	
	printf("Arad���n�z de�er ka�t�r ? --->  ");
	scanf("%d",&ara);
	
	while( ilk<=son && k!=1 )
	{
		orta=floor((ilk+son)/2);
		
		if( ara < dizi[orta] )
		{
			son = orta - 1;
		}
		else if( ara > dizi[orta])
		{
			ilk = orta + 1;
		}
		else
		{
			k = 1;
		}
	}
	if( k == 1 )
	{
		printf("\nArad���n�z de�er %d. s�rada \n",orta+1);
	}
	else
	{
		printf("Arad���n�z de�er yoktur !\n");
	}
}

