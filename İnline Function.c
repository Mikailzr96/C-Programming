#include <stdio.h>
/*
	�NL�NE FONKS�YONLAR --> 
	
	inline belirtecini fonksiyonun geri d�n�� tipinin �n�ne yerle�tirmek derleyiciye; o fonksiyon derleyiciye fonksiyonun �a�r�s� yerine, 
	fonksiyonun kullan�ld��� yerde yarat�lmas�n� �tavsiye eder�.
	�nline belirteci sadece k���k ve s�k kullan�lan fonksiyonlar i�in kullan�lmal�d�r. Nedeni; inline fonksiyonun kullan�ld��� yere kopyalanmas�n� sa�lad��� i�in 
	program�n boyutunu art�r�r ve yava�lamas�na neden olur.	
	
		Tan�mlad���n bir fonksiyonun �n�ne inline ifadesi getirdi�inde, derleme
		s�ras�nda, derleyiciye; fonksiyonu �a��rd���n yerde, o fonksiyonun kodunun bir
		kopyas�n� yerle�tirmesini tavsiye etmi� oluyorsun. Tavsiye kelimesini vurgulad�m
		��nk� inline olup olmama konusundaki son karar� derleyici veriyor, hi�bir garantisi
		yok. �n�ne inline belirteci ekledi�in bir fonksiyon, inline olarak kullan�lmayabilir;
		ya da inline eklemesen de inline olarak kullan�labilir.
		E�er 3 sat�r� ge�meyen uzunlukta bir fonksiyonun varsa,
		Bu fonksiyonu kod i�inde y�zlerce kez �a��r�yorsan,
		Kodun b�y�mesi ile bir problemin yoksa inline fonksiyon kullanman�n faydas�n� hissedebilirsin.	
		
*/

	int fonk(int a, int b)
	{  
		int arr[3] = { 5,6,7 };
    	return (a + b)*(a + b) ;
	}
	
	inline int fonk_inline(int a, int b)
	{
	    int arr[3] = { 5,6,7 };
	    return (a + b)*(a + b) ;
	}
	
	
//	normal fonksiyon �al��ma s�resi ->  46.9985 sn
	
//	inline fonksiyon �al��ma s�resi ->  44.6575 sn
	

int main()
{
		
}

