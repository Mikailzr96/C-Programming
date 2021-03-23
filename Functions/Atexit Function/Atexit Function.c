#define		_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
	int atexit(void (*func) (void));  -->

		-Daha önce kayıt edilmiş işlevleri kayıt edilmelerine göre ters sıra içinde çağırır.
		-Yazma amaçlı açlışmış tüm dosyaların tampon alanlarını(buffer) boşaltır. (flush)
		-Açık durumda olan tüm dosyaları kapatır.
		-tmpfile işleviyle açılmış olan dosyaları siler.
		-Kontorlü,programın çalıştırdığı sisteme,başarı durumunu ileten bir bilgiyi geri verir.
*/

void F1() {
	printf("1.Fonksiyon baslatıldı...\n");
	return;
}
void F2() {
	printf("2.Fonksiyon baslatıldı...\n");
	return;
}
int main() {

	atexit(F1);			  // Fonksiyondaki işlemleri kaydeder ve fonksiyondan çıkar. 
	atexit(F2);			  // Fonksiyondaki işlemleri kaydeder ve fonksiyondan çıkar
	printf("Atexit ters sırayla çalıştığına göre ilk burası çalışır,ardından fonksiyonlara yönlendirilir. --> \n");
	exit(EXIT_SUCCESS);	  // = exit(0); --> Program başarılı bir şekilde sonlandırıldı. 

}
