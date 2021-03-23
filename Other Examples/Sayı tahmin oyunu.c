#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	setlocale(LC_ALL,"Turkish");

	int BS,Tahmin,s = 0;
	
	srand(time(NULL));
	BS = rand() % 99;
	
	do{
		printf("Tahmininiz = ");
		scanf("%d",&Tahmin);
		s++;
		
		if( Tahmin > BS )
		{
			printf("Daha küçük sayý giriniz...\n");
		}
		if( Tahmin < BS )
		{
			printf("Daha büyük bir sayý giriniz...\n");
		}
		printf("\n");
	}while( Tahmin != BS );
	
	
	printf("%d tahmininde bulundunuz...",s);
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
