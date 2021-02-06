#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
    Ptr parametresi ile gösterilen bellek bölgesinin n parametre değeri kadar ilk byte'ında c parametresi ile gösterilen değerin 
    (unsigned char olarak değerlendirilir) ilk geçtiği yeri arar ve bu bellek adresini gösteren bir işaretçi geri döndürür.

    void* memchr(const void *ptr, int c, size_t n);

    ptr: Aramanın yapılacağı bellek bölgesinin başlangıcını gösteren bir işaretçidir.

    c:   Aranacak olan değeri gösterir. Değer int olarak verilir ancak fonksiyon bu değeri unsigned char bir değere çevirerek arama işlemi yapar.

    n:   Ptr parametresi ile gösterilen bellek bölgesinde aranacak byte sayısını gösterir.

*/
int main()
{

    char str[10] = "Elektronik";

    char* ps = memchr(str, 'i', 10);

    if (ps)
        printf("Aranan karakter 'i' %d. karakterdir. \n", ps - str);
    else
        printf("Aranan karakter bulunamadi. \n");

}