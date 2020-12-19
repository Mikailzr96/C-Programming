#include <stdio.h>
#include <locale.h>
#define			SIZE			5
int main()
{
	setlocale(LC_ALL, "Turkish");


	int a[SIZE] = { 2,4,6,8,10 };

	int* p = a;

	printf("Dizinin elemanlarının ve adreslerinin farklı yazım şekilleri ---> \n\n");
	for (int i = 0; i < 5; i++)
		printf("i = %d \t %d %d %p %p %p \n",i,a[i],*(a+i),a,&a[i],(a + i));

	printf("\n---------------------------------------------------------------------------------------------------\n");

	int* p1 = a;					//	Dizinin başlangıcı
	int* p2_end = a + SIZE;			// Dizinin bittiği yer	-->	(*p2_end != 10) " '\0' karakterinin yeri olabilir !"
	int* p3_end = a + SIZE - 1;		// Dizinin son elemanı	--> (*p3_end = 10) 
	
	printf("%d \n", *p2_end);
	printf("%d \n", *p3_end);

	printf("\nDizinin farklı şekilde yazılışı ---> \n");

	while (p < p2_end)
		printf("%d ", *p++);

	printf("\n\n\n\n");
}