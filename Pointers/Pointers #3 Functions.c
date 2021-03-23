#include <stdio.h>
#include <locale.h>

int *toplama(int *a,int *b)
{
	static int toplam;
	
	toplam = (*a) + (*b);
	
	return &toplam;
}

int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int s1,s2;
	
	printf("Ýki sayý giriniz --> \n");
	scanf("%d %d",&s1,&s2);
	
	int *p = toplama(&s1,&s2);
	
	printf("\n\n%d + %d = %d ",s1,s2,*p);
	
}
