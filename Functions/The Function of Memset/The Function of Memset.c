#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
    C parametresi ile gösterilen bellek bölgesindeki karakteri (unsigned char), dest parametresindeki bellek bölgesinin ilk n parametre 
    değeri kadar byte'ına kopyalar.

    void* memset(void *dest, int c, size_t n);

    dest:    C parametresindeki karakterin kopyalanacağı belleği gösteren işaretçidir.

    c:       Dest parametresine kopyalanacak karakterdir.

    n:       Kopyalanacak maksimum karakter sayısıdır.

*/

int main()
{
    char dizi[] = "Elektronik";

    printf("Dizi bellek içeriği: %s \n", dizi);

    memset(dizi, 'x', 5);

    printf("Dizi bellek içeriği: %s \n", dizi);

    return 0;
}
