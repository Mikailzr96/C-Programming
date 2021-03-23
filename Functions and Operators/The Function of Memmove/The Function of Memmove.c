#include <stdio.h>
#include <string.h>
/*

    Src parametresi ile gösterilen bellek bölgesindeki karakterleri, n parametre değeri kadar uzunlukta, dest parametresindeki
    bellek bölgesine kopyalar.

    void* memmove(void *dest, const void *src, size_t n);

    dest:   Src parametresindeki verilerin kopyalanacağı belleği gösteren işaretçidir.

    src:    Dest parametresine kopyalanacak karakterlerin bellek başlangıcını gösteren bir işaretçidir.

    n:      Kopyalanacak maksimum karakter sayısıdır.

*/
int main()
{

    char dest[] = "Gömülü";
    const char source[] = "Yazilim";

    printf("Dest dizisindedeki bellek içeriği: %s \nSource dizisindeki bellek içeriği: %s \n\n", dest, source);

    memmove(dest, source, 10);

    printf("Dest dizisindedeki bellek içeriği: %s \nSource dizisindeki bellek içeriği: %s \n\n", dest, source);

    return 0;

}
