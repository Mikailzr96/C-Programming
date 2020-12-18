#include <stdio.h>
/*
	İNLİNE FONKSİYONLAR --> 
	
	inline belirtecini fonksiyonun geri dönüş tipinin önüne yerleştirmek derleyiciye; o fonksiyon derleyiciye fonksiyonun çağrısı yerine, 
	fonksiyonun kullanıldığı yerde yaratılmasını “tavsiye eder”.
	İnline belirteci sadece küçük ve sık kullanılan fonksiyonlar için kullanılmalıdır. Nedeni; inline fonksiyonun kullanıldığı yere kopyalanmasını sağladığı için 
	programın boyutunu artırır ve yavaşlamasına neden olur.	
	
		Tanımladığın bir fonksiyonun önüne inline ifadesi getirdiğinde, derleme
		sırasında, derleyiciye; fonksiyonu çağırdığın yerde, o fonksiyonun kodunun bir
		kopyasını yerleştirmesini tavsiye etmiş oluyorsun. Tavsiye kelimesini vurguladım
		çünkü inline olup olmama konusundaki son kararı derleyici veriyor, hiçbir garantisi
		yok. Önüne inline belirteci eklediğin bir fonksiyon, inline olarak kullanılmayabilir;
		ya da inline eklemesen de inline olarak kullanılabilir.
		Eğer 3 satırı geçmeyen uzunlukta bir fonksiyonun varsa,
		Bu fonksiyonu kod içinde yüzlerce kez çağırıyorsan,
		Kodun büyümesi ile bir problemin yoksa inline fonksiyon kullanmanın faydasını hissedebilirsin.	
		
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
	
	
//	normal fonksiyon çalışma süresi ->  46.9985 sn
	
//	inline fonksiyon çalışma süresi ->  44.6575 sn
	

int main()
{
		
}

