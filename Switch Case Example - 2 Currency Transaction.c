/*
Döviz bürosuna yönelik bir program yazmanýz isteniyor. Müþteriler gelip döviz alma yada satma iþlemini gerçekleþtirecekler. 
Müþteri geldiðinde döviz alýþý/satýþý, döviz cinsi gibi bilgileri isteyip gerekli bilgileri kullanýcýya bildiren 
yazýlýmý aþaðýdaki þartlara baðlý olarak C/C++ programlama dilinde yapýnýz. 

Döviz alýþ kurlarý (Döviz bürosu döviz alýyor yani müþteri döviz satýyor.)
Döviz Cinsi	Döviz Miktarý<=1000	1000<Döviz miktarý<=5000	 Döviz miktarý>5000
Euro	3.85	3.89	3,90
Dolar	3.54	3.57	3.58
Sterlin	4.50	4.57	4.60
Ýsviçre Franký	3.55	3.61	3.67

Döviz satýþ kurlarý (Döviz bürosu döviz satýyor müþteri döviz alýyor.)
Döviz Cinsi	Döviz Miktarý<=1000	1000<Döviz miktarý<=5000	 Döviz miktarý>5000
Euro	3.98	3.94	3.92
Dolar	3.68	3.63	3.62
Sterlin	4.70	4.66	4.62
Ýsviçre Franký	3.75	3.70	3.69
*/

#include <stdio.h>
#include <locale.h>
float alimfonksiyon1(float dovizmiktari)
{
	int dovizcinsi;	
	printf("\nÝþlem yapmak istediðiniz döviz cinsini seçiniz -->\n1.Euro\n2.Dolar\n3.Sterlin\n4.Ýsviçre Franký  ");
	scanf("%d",&dovizcinsi);

	switch(dovizcinsi)
	{
		case 1:
			printf("Paranýzýn deðeri = %.2f Euro \n", dovizmiktari / 3.85); break;
		case 2:
			printf("Paranýzýn deðeri = %.2f Dolar \n",dovizmiktari / 3.54); break;
		case 3:
			printf("Paranýzýn deðeri = %.2f Sterlin \n",dovizmiktari / 4.50); break;
		case 4:
			printf("Paranýzýn deðeri = %.2f Ýsviçre Franký \n",dovizmiktari / 3.55); break;
		default :
			printf("Hatalý veya yanlýþ deðer girdiniz.Lütfen tekrar deneyiniz. \n"); break;		
	}
	return 1;	
}
float alimfonksiyon2(float dovizmiktari)
{
	int dovizcinsi;	
	printf("\nÝþlem yapmak istediðiniz döviz cinsini seçiniz -->\n1.Euro\n2.Dolar\n3.Sterlin\n4.Ýsviçre Franký  ");
	scanf("%d",&dovizcinsi);

	switch(dovizcinsi)
	{
		case 1:
			printf("Paranýzýn deðeri = %.2f Euro \n", dovizmiktari / 3.89); break;
		case 2:
			printf("Paranýzýn deðeri = %.2f Dolar \n",dovizmiktari / 3.57); break;
		case 3:
			printf("Paranýzýn deðeri = %.2f Sterlin \n",dovizmiktari / 4.57); break;
		case 4:
			printf("Paranýzýn deðeri = %.2f Ýsviçre Franký \n",dovizmiktari / 3.61); break;
		default :
			printf("Hatalý veya yanlýþ deðer girdiniz.Lütfen tekrar deneyiniz. \n"); break;	
			
	}
	return 0;	
}
float alimfonksiyon3(float dovizmiktari)
{
	int dovizcinsi;	
	printf("\nÝþlem yapmak istediðiniz döviz cinsini seçiniz -->\n1.Euro\n2.Dolar\n3.Sterlin\n4.Ýsviçre Franký  ");
	scanf("%d",&dovizcinsi);

	switch(dovizcinsi)
	{
		case 1:
			printf("Paranýzýn deðeri = %.2f Euro \n", dovizmiktari / 3.90); break;
		case 2:
			printf("Paranýzýn deðeri = %.2f Dolar \n",dovizmiktari / 3.58); break;
		case 3:
			printf("Paranýzýn deðeri = %.2f Sterlin \n",dovizmiktari / 4.60); break;
		case 4:
			printf("Paranýzýn deðeri = %.2f Ýsviçre Franký \n",dovizmiktari / 3.67); break;
		default :
			printf("Hatalý veya yanlýþ deðer girdiniz.Lütfen tekrar deneyiniz. \n"); break;	
			
	}	
	return 0;
}
float satimfonksiyon1(float dovizmiktari)
{
	int dovizcinsi;	
	printf("\nÝþlem yapmak istediðiniz döviz cinsini seçiniz -->\n1.Euro\n2.Dolar\n3.Sterlin\n4.Ýsviçre Franký  ");
	scanf("%d",&dovizcinsi);

	switch(dovizcinsi)
	{
		case 1:
			printf("Paranýzýn deðeri = %.2f Euro \n", dovizmiktari / 3.98); break;
		case 2:
			printf("Paranýzýn deðeri = %.2f Dolar \n",dovizmiktari / 3.68); break;
		case 3:
			printf("Paranýzýn deðeri = %.2f Sterlin \n",dovizmiktari / 4.70); break;
		case 4:
			printf("Paranýzýn deðeri = %.2f Ýsviçre Franký \n",dovizmiktari / 3.75); break;
		default :
			printf("Hatalý veya yanlýþ deðer girdiniz.Lütfen tekrar deneyiniz. \n"); break;	
			
	}	
	return 0;
}
float satimfonksiyon2(float dovizmiktari)
{
	int dovizcinsi;
	printf("\nÝþlem yapmak istediðiniz döviz cinsini seçiniz -->\n1.Euro\n2.Dolar\n3.Sterlin\n4.Ýsviçre Franký  ");
	scanf("%d",&dovizcinsi);

	switch(dovizcinsi)
	{
		case 1:
			printf("Paranýzýn deðeri = %.2f Euro \n", dovizmiktari / 3.94); break;
		case 2:
			printf("Paranýzýn deðeri = %.2f Dolar \n",dovizmiktari / 3.63); break;
		case 3:
			printf("Paranýzýn deðeri = %.2f Sterlin \n",dovizmiktari / 4.66); break;
		case 4:
			printf("Paranýzýn deðeri = %.2f Ýsviçre Franký \n",dovizmiktari / 3.70); break;
		default :
			printf("Hatalý veya yanlýþ deðer girdiniz.Lütfen tekrar deneyiniz. \n"); break;	
			
	}	
	return 0;
}
float satimfonksiyon3(float dovizmiktari)
{
	int dovizcinsi;	
	printf("\nÝþlem yapmak istediðiniz döviz cinsini seçiniz -->\n1.Euro\n2.Dolar\n3.Sterlin\n4.Ýsviçre Franký  ");
	scanf("%d",&dovizcinsi);

	switch(dovizcinsi)
	{
		case 1:
			printf("Paranýzýn deðeri = %.2f Euro \n", dovizmiktari / 3.92); break;
		case 2:
			printf("Paranýzýn deðeri = %.2f Dolar \n",dovizmiktari / 3.62); break;
		case 3:
			printf("Paranýzýn deðeri = %.2f Sterlin \n",dovizmiktari / 4.62); break;
		case 4:
			printf("Paranýzýn deðeri = %.2f Ýsviçre Franký \n",dovizmiktari / 3.69); break;
		default :
			printf("Hatalý veya yanlýþ deðer girdiniz.Lütfen tekrar deneyiniz. \n"); break;	
			
	}	
	return 0;
}
int main()
{
	setlocale(LC_ALL,"Turkish");
	
	int dovizcinsi,islem;
	float dovizmiktari;
	git1:
	printf("Yapmak istediðiniz iþlem nedir ?\n1.Döviz Alým Ýþlemi\n2.Döviz Satýþ Ýþlemi  ");
	scanf("%d",&islem);
	while( islem < 1 || islem > 2 )
	{
		printf("Hatalý veya yanlýþ deðer girdiniz.Lütfen tekrar deneyiniz. \n");
		goto git1;
	}
	
	git2:
	printf("\nÝþlem yapmak istediðiniz para miktarýný giriniz = ");
	scanf("%f",&dovizmiktari);
	while( dovizmiktari <= 0 )
	{
		printf("Hatalý veya yanlýþ deðer girdiniz.Lütfen tekrar deneyiniz. \n");
		goto git2;
	}
	
	switch(islem)
	{
		case 1:
			printf("\n\nDÖVÝZ ALIM ÝÞLEMÝ\n\nBakiyeniz = %.2f TL ",dovizmiktari);
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
			printf("\n\nDÖVÝZ SATIÞ ÝÞLEMÝ\n\nBakiyeniz = %.2f TL ",dovizmiktari);
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
			printf("Hatalý veya yanlýþ deðer girdiniz.Lütfen tekrar deneyiniz. \n"); break;	
	}
	return 0;
}

