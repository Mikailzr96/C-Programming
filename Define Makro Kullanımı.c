#include <stdio.h>
#include <locale.h>

#define topla(a,b) (a+b) //makro kullanýmý
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int a,b;
	
	a = 10;
	b = -7;
	
	printf("Toplam = %d \n" ,topla(a,b));
	

}
