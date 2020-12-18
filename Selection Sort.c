#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	
	int N,temp,A[15];
	
	printf("N deðeri giriniz = ");
	scanf("%d",&N);
	
	for(int i=0; i<N; i++)
	{
		printf("A(%d) = ",i);
		scanf("%d",&A[i]);
	}
	for(int i=0; i<N; i++)
	{
		for(int j=i+1; j<N; j++)
		{
			if( A[j] < A[i] ) 
			{
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
		}
	}	
	printf("\nSýralý dizi -->\n");	printf("-----------------\n");
	for(int i=0; i<N; i++)
	{
		printf("A(%d) = %d \n",i,A[i]);
	}
}

