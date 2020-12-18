#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Turkish");
		
	printf("1. Hello \n World \n");		// \n -> Alt Satýr
	printf("2. Hello \t World \n");		// \t -> Tab Boþluk
	printf("3. Hello \a World \n");		// \a -> Program çalýþtýðýnda ses çýkar
	printf("4. Hello \r World \n");		// \r -> Üzerine yazma
	printf("5. Hello_\b World \n");		// \b -> Önceki karakteri siler
	printf("6. Hello \\ World \n");		// \\ -> Slash 

}
