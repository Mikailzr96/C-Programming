#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#define NDEBUG		Assert() fonksiyonunu devre dışı bırakır. Kütüphaneden -assert.h- önce tanımlanmalıdır. 
#include <assert.h>
/*
	Assert() fonksiyonu program içinde teşhisler elde etmek için kullanılır. Elde edilen teşhis bilgileri standart hata 
	dosyasına yazılabilir.

	void assert(int expression);

	expression: Bu bir değişken veya herhangi bir C ifadesi olabilir. Eğer ifade doğru sonuç verirse, assert() fonksiyonu hiçbir şey yapmaz.
	İfade yanlış sonuç verirse, assert() fonksiyonu stderr üzerinde bir hata mesajı görüntüler ve programın çalışmasını durdurur.


	Standart kütüphane tarafından tanımlanmayan NDEBUG makrosu assert() fonksiyonunun durumunu belirler. Eğer NDEBUG, assert.h dosyasının dahil 
	edildiği kaynak koddaki noktada bir makro adı olarak tanımlanırsa, assert hiçbir şey yapmaz. Farklı bir ifade ile, assert() fonksiyonu sadece
	NDEBUG makrosunun tanımlanmadığı durumda çalışır.
*/

int main()
{
	
	int x = 30;

	// assert(x < 10);

/*----------------------------------------------------------------------------------------------------------------------

	Static Assert -> 
	
		Compile time'da bir ifadenin doğruluğunu sınar. 

		static_assert(sabit_değer,"Sabit değere eşit olmadığında verilen hata mesajı"); 

*/
	static_assert(sizeof(int) == 4, "The type of int is not 4 bytes ! \n");	// Sabit değeri 8 yaparsak yazdoğımız hata mesajını verir. 	

}