#include <stdio.h>
#include <locale.h>

/*
	int *const p = &x;										p is a constat to pointter int 
	int const *p = &x; == 	const int *p = &x;				p is a pointer to constant int	
	
	const ifadesinden sonra ' = ' varmýþ gibi düþünürsek const ifadesinin eþtini daha kolay bulabiliriz. 
	Örneðin --> 
			int *const p = &x; ifadesinde 'int *const = p' --> const = p;
			int const *p = &x; ifadesinde 'int const = *p' --> const = *p;	
			
	int const const *p = &x; == const int const *p = &x 
*/
int main()
{
	setlocale(LC_ALL, "Turkish");
	int x = 10, y = 12, z = 14;

	int* const p1 = &x;			// const = p1 --> p1 deðiþemez, *p1 ve x deðiþebilir. 
	x++;
	(*p1)++;
	printf("X --> \n");
	printf("Sayýnýn Deðeri %d\t\t Adresi = %p \n", *p1, p1);
	printf("Sayýnýn Deðeri %d\t\t Adresi = %p \n\n", x, &x);


	int const* p2 = &y;			// const = *p2	--> *p2 deðiþemez. p2 ve y deðiþebilir.
	p2++;
	++y;
	printf("Y --> \n");
	printf("Sayýnýn Deðeri %d\t Adresi = %p \n", *p2, p2);		// Adres deðiþtiðinden *p2 çöp deðerler gösterir.
	printf("Sayýnýn Deðeri %d\t\t Adresi = %p \n\n", y, &y);


	const int* const p3 = &z;	// const = p3 && const = *p3 --> Sadece z deðiþebilir.
	z++;
	printf("Z --> \n");
	printf("Sayýnýn Deðeri %d\t\t Adresi = %p \n", *p3, p3);		// Adres deðiþtiðinden *p2 çöp deðerler gösterir.
	printf("Sayýnýn Deðeri %d\t\t Adresi = %p \n\n", z, &z);
	
}
