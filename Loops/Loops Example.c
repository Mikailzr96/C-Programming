/*
	1'den 1000'e kadar olan sayýlar içerisinde 5'e tam bölünebilen ayný zamanda 7'ye tam bölünemeyen sayýlarý sayan, 
	toplamlarýný hesaplayan ve bu sayýlarý listeleyen bir programýn akýþ diyagramýný çizerek C++ kodunu yazýnýz. 
*/
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int toplam = 0;
	
	for(int i=1; i<=1000; i++)
	{
		if( i % 5 == 0 && i % 7 != 0 )
		{
			printf("%d \n",i);	
			
			toplam += i;
		}	
	}
	
	printf("Toplam = %d ",toplam);
	
	return 0;
}

