#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Turkish");
		
	printf("1. Hello \n World \n");		// \n -> Alt Sat�r
	printf("2. Hello \t World \n");		// \t -> Tab Bo�luk
	printf("3. Hello \a World \n");		// \a -> Program �al��t���nda ses ��kar
	printf("4. Hello \r World \n");		// \r -> �zerine yazma
	printf("5. Hello_\b World \n");		// \b -> �nceki karakteri siler
	printf("6. Hello \\ World \n");		// \\ -> Slash 

}
