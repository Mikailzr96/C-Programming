#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	
	int A,N,B,K,T[99],S = 0;
	printf("	TABAN ARTÝMETÝÐÝ 	\n\n");
	printf("Pozitif bir tam sayý giriniz  = ");
	scanf("%d",&A);
	printf("Hangi tabana dönüþtürülecek -> ");
	scanf("%d",&N);
	
	while( A > N-1 )
	{
		B = (int)
		A/N ;
		K = A % N;
		S++;
		T[S-1] = K;
		A = B;
	}
	S++;
	T[S-1] = B;
	
	printf("\n%d Tabanýndaki karþýlýðý = ",N);

	for(int i=S-1; i>=0; i--)
	{
		printf("%d ",T[i]);
	}
}

