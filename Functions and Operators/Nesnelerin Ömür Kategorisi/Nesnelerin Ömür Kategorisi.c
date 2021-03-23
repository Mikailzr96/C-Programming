/*
  C’de ömür kavramı 3’e ayrılır;

  Statik
  Otomatik
  Dinamik

Statik Ömür		: Hayatını programın başından sonuna kadar sürdürmektedir.
Otomatik Ömür	: Bir kodun yürütülmesi sırasında bellekte kalan kodun çalışması sonlandığında bellekten silinen bir ömür çeşitidir.
Dinamik Ömür	: Programın çalışıp bitmesiyle ilgili bir ömür anlayışı olmayan ne zaman istersek hayata geçen ne zaman 
					istersek hayatı sonlanacaktır.

Global değişkenler Static Ömürlüdür.
Fonksiyon içinde ve parametre olarak tanımlananlar Otomatik Ömürlüdür.
Static Ömürlü olan değişkenler ilk değer verilmezse 0 değeri otomatik olarak verilir.

-Program main ile başlar ve main bittiğinde program sonlanır. main içine yazılan değişken program sonuna kadar ömrünü sürdürse de bu o
değişkenin static değişken olduğu anlamına GELMEZ.
-Static ömürlü değişkenler hayata main fonksiyonu çağrılmadan gelirler.
-Static ömürlü bir değişkenle static ömürlü olan global değişken birbirinden farklıdır. Static ömürlü değişkenler tanımlandığı alanda
kullanılır ve program sonlana kadar saklanır ve o alanda kullanılır fakat global değişkenlerde static’tir ve her yerden erişme imkanı vardır.

Çöp değer (garbage value) bellekte var olan silinmiş yani üzerine yazılabilir (eski değerlerdir). Otomatik ömürlü 
değişkenler çöp değerle başlar ve set edilmezse yanlış sonuçlar doğurur. Sonuç olarak otomatik ömürlü değişkenlere 
değer atamadan kullanmak hatalı olacaktır.

Otomatik ömürlü değişkenler için bellekte "Stack" bölgesi kullanılır.
Statik ömürlü değişkenler için bellekte "Data Segment" bölgesi kullanılır.
Dinamik ömürlü değişkenler için bellekte "Heap" bölgesi kullanılır.

*/
#include <stdio.h>
#include <locale.h>

void fonk1() {
	int x = 7;
	++x;
	printf("x = %d \n", x);
}
void fonk2() {
	static int x = 7;	
	++x;
	printf("x = %d \n", x);
}

int main()
{
	setlocale(LC_ALL, "Turkish");

	printf("Otomatik Ömürlü --> \n");
	fonk1();
	fonk1();
	fonk1();
	fonk1();
	printf("Statik Ömürlü --> \n");	// Fonksiyona her çağrı yaptığımızda önceki değer korunur.
	fonk2();
	fonk2();
	fonk2();
	fonk2();
}

