#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*
    Malloc veya calloc fonksiyonu ile oluşturmuş olduğumuz dinamik dizde eleman sayısının arttırmak istediğimizde 
    kullanacağımız fonksiyonumuzdur.
    void* realloc(void *ptr, size_t size);


    Program, malloc() fonksiyonunu kullanarak 5 adet int değer için bellek tahsisi yapar ve her bellek adresine int bir değer atayarak 
    bellek adreslerini ve bu adreslere atadığı değerleri ekrana yazar. Daha sonra, realloc() fonksiyonuyla tahsis edilen bellek miktarını
    10 int değer alacak kadar genişletir ve yeni atadığı değerleri ve bellek adreslerini ekrana yazar.
*/
int main()
{
    int* ip, id;

    ip = (int*)malloc(5 * sizeof(int));

    for (id = 0; id < 5; id++) {
        *(ip + id) = id + 1;
        printf("%p adresindeki değer: %d\n", (ip + id), *(ip + id));
    }

    ip = (int*)realloc(ip, 10 * sizeof(int));

    printf("\nGenişletilmiş bellek değerleri: \n\n");

    for (; id < 10; id++) { // Burada id değişken değeri 5 olarak başlar.
        *(ip + id) = id + 1;
        printf("%p adresindeki değer: %d\n", (ip + id), *(ip + id));
    }

    free(ip);

    return 0;
}