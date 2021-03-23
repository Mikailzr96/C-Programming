#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


/*
	int sprintf(char verilerin_kayıt_edileceği_dizi, const char *format, parametre1, parametre2, ...); --> Bir karakter dizisi içinde format
	tanımlayıcıları ile tanımlanan değerleri bir karakter dizisi içine yazar.

	int sscanf(const char *buffer, const char *format, ...); --> Bir karakter dizisinden verileri okuyarak değişkenlere atar.

*/


int main()
{
    int id;
    float fd;
    char cdizi[40];
    char buffer[100];

    sprintf(buffer, "%d %.2f %s", 36, 121.45, "Bilgisayar");

    printf("Oluşturulan karakter dizisi: %s \n", buffer);

    sscanf(buffer, "%d %f %s", &id, &fd, cdizi);

    printf("Okunan karakter dizisi: %d %.2f %s \n", id, fd, cdizi);

}