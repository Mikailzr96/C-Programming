/*
D�viz b�rosuna y�nelik bir program yazman�z isteniyor. M��teriler gelip d�viz alma yada satma i�lemini ger�ekle�tirecekler. 
M��teri geldi�inde d�viz al���/sat���, d�viz cinsi gibi bilgileri isteyip gerekli bilgileri kullan�c�ya bildiren 
yaz�l�m� a�a��daki �artlara ba�l� olarak C/C++ programlama dilinde yap�n�z. 

D�viz al�� kurlar� (D�viz b�rosu d�viz al�yor yani m��teri d�viz sat�yor.)
D�viz Cinsi	D�viz Miktar�<=1000	1000<D�viz miktar�<=5000	 D�viz miktar�>5000
Euro	3.85	3.89	3,90
Dolar	3.54	3.57	3.58
Sterlin	4.50	4.57	4.60
�svi�re Frank�	3.55	3.61	3.67

D�viz sat�� kurlar� (D�viz b�rosu d�viz sat�yor m��teri d�viz al�yor.)
D�viz Cinsi	D�viz Miktar�<=1000	1000<D�viz miktar�<=5000	 D�viz miktar�>5000
Euro	3.98	3.94	3.92
Dolar	3.68	3.63	3.62
Sterlin	4.70	4.66	4.62
�svi�re Frank�	3.75	3.70	3.69
*/

#include <stdio.h>
#include <locale.h>
float alimfonksiyon1(float dovizmiktari)
{
	int dovizcinsi;	
	printf("\n��lem yapmak istedi�iniz d�viz cinsini se�iniz -->\n1.Euro\n2.Dolar\n3.Sterlin\n4.�svi�re Frank�  ");
	scanf("%d",&dovizcinsi);

	switch(dovizcinsi)
	{
		case 1:
			printf("Paran�z�n de�eri = %.2f Euro \n", dovizmiktari / 3.85); break;
		case 2:
			printf("Paran�z�n de�eri = %.2f Dolar \n",dovizmiktari / 3.54); break;
		case 3:
			printf("Paran�z�n de�eri = %.2f Sterlin \n",dovizmiktari / 4.50); break;
		case 4:
			printf("Paran�z�n de�eri = %.2f �svi�re Frank� \n",dovizmiktari / 3.55); break;
		default :
			printf("Hatal� veya yanl�� de�er girdiniz.L�tfen tekrar deneyiniz. \n"); break;		
	}
	return 1;	
}
float alimfonksiyon2(float dovizmiktari)
{
	int dovizcinsi;	
	printf("\n��lem yapmak istedi�iniz d�viz cinsini se�iniz -->\n1.Euro\n2.Dolar\n3.Sterlin\n4.�svi�re Frank�  ");
	scanf("%d",&dovizcinsi);

	switch(dovizcinsi)
	{
		case 1:
			printf("Paran�z�n de�eri = %.2f Euro \n", dovizmiktari / 3.89); break;
		case 2:
			printf("Paran�z�n de�eri = %.2f Dolar \n",dovizmiktari / 3.57); break;
		case 3:
			printf("Paran�z�n de�eri = %.2f Sterlin \n",dovizmiktari / 4.57); break;
		case 4:
			printf("Paran�z�n de�eri = %.2f �svi�re Frank� \n",dovizmiktari / 3.61); break;
		default :
			printf("Hatal� veya yanl�� de�er girdiniz.L�tfen tekrar deneyiniz. \n"); break;	
			
	}
	return 0;	
}
float alimfonksiyon3(float dovizmiktari)
{
	int dovizcinsi;	
	printf("\n��lem yapmak istedi�iniz d�viz cinsini se�iniz -->\n1.Euro\n2.Dolar\n3.Sterlin\n4.�svi�re Frank�  ");
	scanf("%d",&dovizcinsi);

	switch(dovizcinsi)
	{
		case 1:
			printf("Paran�z�n de�eri = %.2f Euro \n", dovizmiktari / 3.90); break;
		case 2:
			printf("Paran�z�n de�eri = %.2f Dolar \n",dovizmiktari / 3.58); break;
		case 3:
			printf("Paran�z�n de�eri = %.2f Sterlin \n",dovizmiktari / 4.60); break;
		case 4:
			printf("Paran�z�n de�eri = %.2f �svi�re Frank� \n",dovizmiktari / 3.67); break;
		default :
			printf("Hatal� veya yanl�� de�er girdiniz.L�tfen tekrar deneyiniz. \n"); break;	
			
	}	
	return 0;
}
float satimfonksiyon1(float dovizmiktari)
{
	int dovizcinsi;	
	printf("\n��lem yapmak istedi�iniz d�viz cinsini se�iniz -->\n1.Euro\n2.Dolar\n3.Sterlin\n4.�svi�re Frank�  ");
	scanf("%d",&dovizcinsi);

	switch(dovizcinsi)
	{
		case 1:
			printf("Paran�z�n de�eri = %.2f Euro \n", dovizmiktari / 3.98); break;
		case 2:
			printf("Paran�z�n de�eri = %.2f Dolar \n",dovizmiktari / 3.68); break;
		case 3:
			printf("Paran�z�n de�eri = %.2f Sterlin \n",dovizmiktari / 4.70); break;
		case 4:
			printf("Paran�z�n de�eri = %.2f �svi�re Frank� \n",dovizmiktari / 3.75); break;
		default :
			printf("Hatal� veya yanl�� de�er girdiniz.L�tfen tekrar deneyiniz. \n"); break;	
			
	}	
	return 0;
}
float satimfonksiyon2(float dovizmiktari)
{
	int dovizcinsi;
	printf("\n��lem yapmak istedi�iniz d�viz cinsini se�iniz -->\n1.Euro\n2.Dolar\n3.Sterlin\n4.�svi�re Frank�  ");
	scanf("%d",&dovizcinsi);

	switch(dovizcinsi)
	{
		case 1:
			printf("Paran�z�n de�eri = %.2f Euro \n", dovizmiktari / 3.94); break;
		case 2:
			printf("Paran�z�n de�eri = %.2f Dolar \n",dovizmiktari / 3.63); break;
		case 3:
			printf("Paran�z�n de�eri = %.2f Sterlin \n",dovizmiktari / 4.66); break;
		case 4:
			printf("Paran�z�n de�eri = %.2f �svi�re Frank� \n",dovizmiktari / 3.70); break;
		default :
			printf("Hatal� veya yanl�� de�er girdiniz.L�tfen tekrar deneyiniz. \n"); break;	
			
	}	
	return 0;
}
float satimfonksiyon3(float dovizmiktari)
{
	int dovizcinsi;	
	printf("\n��lem yapmak istedi�iniz d�viz cinsini se�iniz -->\n1.Euro\n2.Dolar\n3.Sterlin\n4.�svi�re Frank�  ");
	scanf("%d",&dovizcinsi);

	switch(dovizcinsi)
	{
		case 1:
			printf("Paran�z�n de�eri = %.2f Euro \n", dovizmiktari / 3.92); break;
		case 2:
			printf("Paran�z�n de�eri = %.2f Dolar \n",dovizmiktari / 3.62); break;
		case 3:
			printf("Paran�z�n de�eri = %.2f Sterlin \n",dovizmiktari / 4.62); break;
		case 4:
			printf("Paran�z�n de�eri = %.2f �svi�re Frank� \n",dovizmiktari / 3.69); break;
		default :
			printf("Hatal� veya yanl�� de�er girdiniz.L�tfen tekrar deneyiniz. \n"); break;	
			
	}	
	return 0;
}
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int dovizcinsi,islem;
	float dovizmiktari;
	git1:
	printf("Yapmak istedi�iniz i�lem nedir ?\n1.D�viz Al�m ��lemi\n2.D�viz Sat�� ��lemi  ");
	scanf("%d",&islem);
	while( islem < 1 || islem > 2 )
	{
		printf("Hatal� veya yanl�� de�er girdiniz.L�tfen tekrar deneyiniz. \n");
		goto git1;
	}
	
	git2:
	printf("\n��lem yapmak istedi�iniz para miktar�n� giriniz = ");
	scanf("%f",&dovizmiktari);
	while( dovizmiktari <= 0 )
	{
		printf("Hatal� veya yanl�� de�er girdiniz.L�tfen tekrar deneyiniz. \n");
		goto git2;
	}
	
	switch(islem)
	{
		case 1:
			printf("\n\nD�V�Z ALIM ��LEM�\n\nBakiyeniz = %.2f TL ",dovizmiktari);
				if( dovizmiktari <= 1000 )
				{
					alimfonksiyon1(dovizmiktari);
				}
				else if( 1000 < dovizmiktari <= 5000 )
				{
					alimfonksiyon2(dovizmiktari);
				}
				else if( dovizmiktari > 5000 )
				{
					alimfonksiyon3(dovizmiktari);
				} 
			break;
		case 2:
			printf("\n\nD�V�Z SATI� ��LEM�\n\nBakiyeniz = %.2f TL ",dovizmiktari);
				if( dovizmiktari <= 1000 )
				{
					satimfonksiyon1(dovizmiktari);
				}
				else if( 1000 < dovizmiktari <= 5000 )
				{
					satimfonksiyon2(dovizmiktari);
				}
				else if( dovizmiktari > 5000 )
				{
					satimfonksiyon3(dovizmiktari);
				} 
			break;
		default :
			printf("Hatal� veya yanl�� de�er girdiniz.L�tfen tekrar deneyiniz. \n"); break;	
	}
	return 0;
}

