#include <stdio.h>
#include <locale.h>
int main()
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
		for(int j=0; j<N-1; j++)
		{
			if( A[j+1] < A[j] )
			{
				temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
		}
	}
	printf("\nSýralý dizi -->\n");	printf("-----------------\n");
	for(int i=0; i<N; i++)
	{
		printf("A(%d) = %d \n",i,A[i]);
	}
}

