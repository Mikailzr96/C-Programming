#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Turkish");
	
	
	
	for(int i=0; i<127; i++)
		printf("%c  %d \n",i,i);
	
	
	
	
	
	
	
	
}
