#include <stdio.h>
#include <locale.h>

/*
	int *const p = &x;										p is a constat to pointter int 
	int const *p = &x; == 	const int *p = &x;				p is a pointer to constant int	
	
	const ifadesinden sonra ' = ' varm�� gibi d���n�rsek const ifadesinin e�tini daha kolay bulabiliriz. 
	�rne�in --> 
			int *const p = &x; ifadesinde 'int *const = p' --> const = p;
			int const *p = &x; ifadesinde 'int const = *p' --> const = *p;	
			
	int const const *p = &x; == const int const *p = &x 
*/
int main()
{
	setlocale(LC_ALL, "Turkish");
	int x = 10, y = 12, z = 14;

	int* const p1 = &x;			// const = p1 --> p1 de�i�emez, *p1 ve x de�i�ebilir. 
	x++;
	(*p1)++;
	printf("X --> \n");
	printf("Say�n�n De�eri %d\t\t Adresi = %p \n", *p1, p1);
	printf("Say�n�n De�eri %d\t\t Adresi = %p \n\n", x, &x);


	int const* p2 = &y;			// const = *p2	--> *p2 de�i�emez. p2 ve y de�i�ebilir.
	p2++;
	++y;
	printf("Y --> \n");
	printf("Say�n�n De�eri %d\t Adresi = %p \n", *p2, p2);		// Adres de�i�ti�inden *p2 ��p de�erler g�sterir.
	printf("Say�n�n De�eri %d\t\t Adresi = %p \n\n", y, &y);


	const int* const p3 = &z;	// const = p3 && const = *p3 --> Sadece z de�i�ebilir.
	z++;
	printf("Z --> \n");
	printf("Say�n�n De�eri %d\t\t Adresi = %p \n", *p3, p3);		// Adres de�i�ti�inden *p2 ��p de�erler g�sterir.
	printf("Say�n�n De�eri %d\t\t Adresi = %p \n\n", z, &z);
	
}
