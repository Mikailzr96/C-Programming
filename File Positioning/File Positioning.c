#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	fseek() -->

	Şimdiye kadar incelediğimiz bütün örneklerde, dosyadan yaptığımız okuma işlemlerini dosyanın başından sonuna doğru bir sıra dahilinde yaptık.
	Bunun yanında, aşağıda ana yapısı verilen fseek() fonksiyonunu kullanarak bir dosyanın herhangi bir yerindeki bir bilgiyi okuyabilir
	veya değiştirebiliriz. fseek() fonksiyonu normal olarak çalıştığında 0 değerini, aksi takdirde 0 olmayan bir değer geri döndürür.

	int fseek (FILE *fp, long ara, int yer);

	Burada, fp ifadesi işlem yapılan dosyayı, ara ifadesi yer ifadesinin gösterdiği değerin tanımladığı dosya konumundan, işlem yapılmak
	istenen yerin byte olarak uzaklığını verir. yer ifadesi dosyada arama işleminin başlayacağı yeri gösterir. yer ifadesinin yerine aşağıdaki 
	makrolardan birini kullanmanız gerekir:

	SEEK_SET (0) -> Aramayı dosya başından başlatır.
	SEEK_CUR (1) -> Aramayı aktif konumdan başlatır.
	SEEK_END (2) -> Aramayı dosya sonundan başlatır.

	rewind() -->
	
	Bir dosyanın aktif konumunu dosya başına almak için aşağıda genel yapısı verilen rewind() fonksiyonunu kullanabiliriz.

	void rewind(FILE *fp);


	Ayrıca, aşağıda ana yapısı verilen ftell() fonksiyonunu kullanarak bir dosyanın aktif konumunu belirleyebiliriz:

	ftell() --> 

	long ftell (FILE *fp);

	Normal olarak çalıştığında, fp ile gösterilen dosyanın aktif konumunu, aksi takdirde -1L değerini geri verir.

	Rastgele erişim genellikle ikili sistem dosyalarında kullanılır. Metin dosyalarında bu özelliğin kullanılmamasının nedeni, bu dosyalarda
	karakter değişimlerinin yer almasıdır. fseek() fonksiyonunu metin dosyaları ile kullanmak için, daha önce ftell() fonksiyonu ile dosyanın 
	aktif konumunu belirlememiz ve fseek() fonksiyonunu SEEK_SET ile birlikte tanımlamamız gerekir.

	Rastgele erişim metodunu ikili sistem dosyası olarak açılan metin dosyalarına uygulayabiliriz, ancak metin dosyası olarak açılan dosyalara 
	uygulayamayız.
*/
int main()
{
	FILE* dosya = fopen("Deneme.txt", "w");
	if (dosya == NULL)
		printf("Dosya olusturulamadi \n");
	
	
	printf("Dosya isaretcisinin konumu = %d \n", ftell(dosya));		// Dosya isaretcisinin konumu = 0

	fseek(dosya, 2, 0);												// Dosya isaretcisinin konumu 2 artar. 0 -> Dosya başından itibaren arama yap  
	printf("Dosya isaretcisinin konumu = %d \n", ftell(dosya));		// Dosya isaretcisinin konumu = 2 

	fputs("Hello World \n", dosya);
	

	printf("Dosya isaretcisinin konumu = %d \n", ftell(dosya));		// Dosya isaretcisinin konumu = 16


	fseek(dosya, 2, 1);												// Dosya isaretcisinin konumu 2 artar. 1 -> Bu satırdan itibaren arama yap
	printf("Dosya isaretcisinin konumu = %d \n", ftell(dosya));		// Dosya isaretcisinin konumu = 18
	
	rewind(dosya);
	printf("Dosya isaretcisinin konumu = %d \n", ftell(dosya));		// Dosya isaretcisinin konumu = 0

	fclose(dosya);
}