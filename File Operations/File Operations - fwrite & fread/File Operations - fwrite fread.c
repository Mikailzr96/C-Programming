#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	size_t fread (void *tampon-bellek, size_t boyut, size_t id, FILE *fp);
	size_t fwrite (void *tampon-bellek, size_t boyut, size_t id, FILE *fp);


	fread() fonksiyonu fp ile gösterilen dosyadan okunan boyut yapısında id kadar değeri tampon-bellek ile gösterilen belleğe atar. 
	Burada, boyut ifadesi okunan verinin byte olarak değerini, id ifadesi ise kaç adet veri okunduğunu belirler. fread() fonksiyonu okunan
	veri sayısını geri verir. Bu değer 0 ise, herhangi bir veri okunmamış demektir. Bu durumda, ya bir hata olmuştur ya da dosya sonu
	gelmiştir.

	fwrite() fonksiyonu, fread() fonksiyonunun yaptığı işlemin tam tersini yapar. fwrite() fonksiyonu, tampon-bellek ile gösterilen bellekte
	bulunan boyut yapısında id kadar değeri fp ile gösterilen dosyaya yazar. Burada, boyut ifadesi yazılan byte olarak değerini, id ifadesi 
	ise kaç adet veri yazıldığını belirler. fwrite() fonksiyonu yazılan veri sayısını geri verir. Sadece bir hata meydana geldiğinde bu 
	değer id değerinden az olur.
*/
int main()
{

	char cdizi[] = "C Programlama";
	char gdizi[40];

	FILE* dosya = fopen("Deneme.txt", "w+");
	if (dosya == NULL)
		printf("Dosya açilamadi. \n");

	fwrite(cdizi, strlen(cdizi), 1, dosya);


	rewind(dosya);						// Gösterilen akışın aktif dosya konumunu en başa alır.


	fread(gdizi, strlen(cdizi), 1, dosya);


	gdizi[strlen(cdizi)] = '\0';	// Okunan karakter dizisi sonuna boş karakter ekleme 

	printf("%s", gdizi);

	fclose(dosya);
}