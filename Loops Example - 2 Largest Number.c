/*
	N adet tam sayýyý kullanýcýdan isteyerek, en büyük sayýyý bulup ekrana yazan programý akýþ diyagramýný çizerek kodunu C veya C++ programlama dilinde yazýnýz  
	(N kullanýcý tarafýndan girilecektir.)
*/

#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL,"Turkish");

    int N,sayac = 1,sayi,enbuyuksayi = 0;

    printf("Sayý adeti için, N sayýsýný giriniz = ");
    scanf("%d",&N);
    
    while( N <= 0 )
    {
    	printf("Adet sayýsý negatif veya sýfýr olamaz!! Lütfen pozitif bir deðer giriniz = ");
    	scanf("%d",&N);
	}
	printf("\n");
	
    while( sayac <= N )
    {
        printf("%d.sayýyý giriniz = ",sayac);
        scanf("%d",&sayi);
        
        if( sayi > enbuyuksayi )
        {
        	enbuyuksayi = sayi;
		}	   
    	sayac++;
    }    

	printf("\nEn büyük sayý ---> %d\n",enbuyuksayi);
	
	return 0;
}


