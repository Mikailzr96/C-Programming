#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	
	char m[100],m1[7];
	
	printf("Mesaj�n�z = ");
	gets(m);
	printf("\n�kili (ASCII) kodlamas� = ");
	for(int i=0; i<strlen(m); i++)
	{
		itoa((int) m[i],m1,2);
		printf("%s",m1);
	}
		
	
	
	
	
	
	
	
	
	
}
