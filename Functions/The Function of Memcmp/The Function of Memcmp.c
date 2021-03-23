#define _CRT_SECURE_NO_WARNIGS
#include <stdio.h>
#include <string.h>
#define     SIZE     5
/*
    Ptr1 parametresi ile gösterilen bellek bölgesinin n parametre değeri kadar ilk byte'ını ptr2 
    parametresi ile gösterilen bellek bölgesi ile karşılaştırır. Eğer her iki bellek bölgesindeki tüm değerler aynı ise sıfır değeri,
    aksi takdirde sıfırdan farklı bir değer geri döndürür.

    int memcmp(const void *ptr1, const void *ptr2, size_t n);
 
    ptr1: Karşılaştırma yapılacak ilk bellek bölgesinin başlangıcını gösteren bir işaretçidir.

    ptr2: Karşılaştırma yapılacak ikinci bellek bölgesinin başlangıcını gösteren bir işaretçidir.

    n: Karşılaştırma yapılacak byte sayısını gösterir.

*/
int main()
{

    int a[SIZE] = { 1,2,3,4,5 };
    int b[SIZE] = { 0,1,2,3,4 };

    int result = memcmp(a, b, SIZE);

    if (result > 0)
        printf("Birinci buyuk \n");
    else if (result < 0)
        printf("İkinci buyuk \n");
    else
        printf("Esit \n");

}