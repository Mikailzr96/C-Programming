/*
	N adet tam say�y� kullan�c�dan isteyerek, en b�y�k say�y� bulup ekrana yazan program� ak�� diyagram�n� �izerek kodunu C veya C++ programlama dilinde yaz�n�z  
	(N kullan�c� taraf�ndan girilecektir.)
*/

#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Turkish");

    int N,sayac = 1,sayi,enbuyuksayi = 0;

    printf("Say� adeti i�in, N say�s�n� giriniz = ");
    scanf("%d",&N);
    
    while( N <= 0 )
    {
    	printf("Adet say�s� negatif veya s�f�r olamaz!! L�tfen pozitif bir de�er giriniz = ");
    	scanf("%d",&N);
	}
	printf("\n");
	
    while( sayac <= N )
    {
        printf("%d.say�y� giriniz = ",sayac);
        scanf("%d",&sayi);
        
        if( sayi > enbuyuksayi )
        {
        	enbuyuksayi = sayi;
		}	   
    	sayac++;
    }    

	printf("\nEn b�y�k say� ---> %d\n",enbuyuksayi);
	
	return 0;
}


