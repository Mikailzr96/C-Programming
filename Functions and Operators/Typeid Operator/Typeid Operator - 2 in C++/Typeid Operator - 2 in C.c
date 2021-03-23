#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");

	//	a			-->			typeid(a).name()			-->			 int [10][20] 
	//	&a			-->			typeid(&a).name()			-->			 int (*)[10][20]
	//	&a[0]		-->			typeid(&a[0]).name()		-->			 int (*)[20]
	//	&a[0][0]	-->			typeid(&a[0][0]).name()		-->			 int *
		

	int a[10][20];

	// İki bouytlu dizinin adresini bir pointer değişkene atamak istiyorsak atamalar böyle olur --> 

	int (*p1)[10][20]	= &a;

	int (*p2)[20]		= &a[0];

	int (*p3)			= &a[0][0];

	int (*p4)			= (int*)a;





















}