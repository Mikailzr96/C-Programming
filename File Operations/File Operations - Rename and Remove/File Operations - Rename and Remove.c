#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
	int remove(char *dosya-adı);

	remove() fonksiyonu dosya-adı ifadesi ile gösterilen dosyayı siler. Başarılı bir şekilde sona erdiğinde 0 değerini,
	aksi takdirde 0 olmayan bir değer geri döndürür.


	int rename(const char *old_filename, const char *new_filename);

	rename() fonksiyonu adı verilen dosyanın adını değiştirir.
*/

int main()
{
	FILE* dosya = fopen("Deneme.txt", "r");
	if (dosya == NULL)
		printf("Dosya yazma hatasi \n");
	
/*--------------------------------------------------------------------------------------------------------

	Remove() --> 

	int file_state = remove("Deneme.txt");
	if (file_state)
		printf("Dosya silinemedi \n");
	else
		printf("Dosya basariyla silindi \n");

--------------------------------------------------------------------------------------------------------

	Rename() -->

	rename("Deneme.txt", "Metin_Belgesi.txt");

--------------------------------------------------------------------------------------------------------*/
	fclose(dosya);
}