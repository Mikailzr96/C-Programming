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
			printf("Daha k���k say� giriniz...\n");
		}
		if( Tahmin < BS )
		{
			printf("Daha b�y�k bir say� giriniz...\n");
		}
		printf("\n");
	}while( Tahmin != BS );
	
	
	printf("%d tahmininde bulundunuz...",s);
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
