/*
	1'den 1000'e kadar olan say�lar i�erisinde 5'e tam b�l�nebilen ayn� zamanda 7'ye tam b�l�nemeyen say�lar� sayan, 
	toplamlar�n� hesaplayan ve bu say�lar� listeleyen bir program�n ak�� diyagram�n� �izerek C++ kodunu yaz�n�z. 
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

