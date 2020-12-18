/*
Kaynak dosyadaki her bir #if yönergesi, bir kapanış #endif yönergesi ile eşleşmelidir. #İf ve #endif yönergeleri arasında herhangi
bir sayıda #elif yönerge görünebilir, ancak en fazla bir #else yönergesine izin verilir. Varsa #else yönergesi, #endif önce son yönerge
olmalıdır.
#İf, #elif, #elseve #endif yönergeleri, diğer #if yönergelerinin metin bölümlerine iç içe olabilir. Her iç içe #else, #elifveya #endif
yönergesi, en yakın önceki #if yönergesine aittir.
#İf ve #ifdefgibi tüm koşullu derleme yönergelerinin, dosyanın sonundan önce bir kapanış #endif yönergesiyle eşleşmesi gerekir.
Aksi takdirde, bir hata iletisi oluşturulur. Koşullu derleme yönergeleri içerme dosyalarında yer aldığı zaman, aynı koşulları
karşılamaları gerekir: ekleme dosyasının sonunda eşleşmeyen koşullu derleme yönergeleri olmaması gerekir.

-İfade sizeof veya tür atama işleci kullanamaz.
*/

#include <stdio.h>
#include <locale.h>

#define		MACRO	7
int main()
{
	setlocale(LC_ALL, "Turkish");

#if MACRO > 5
	printf("Sabit 5'ten büyüktür.\n");

#elif MACRO == 5
	printf("Sabit 5'e eşittir.\n");

#else
	printf("Sabit 5'ten küçüktür.\n");

#endif

	printf("\n");

#ifdef MACRO	// MACRO adında bir sabit değer varsa altındaki kodu çalıştır.

	printf("MAACRO adında bir sabit vardır --> Kod çalıştı ! \n");

#endif

#ifndef MACRO2	// MACRO2 adında bir sabit yoksa altındaki kodu çalıştır.

	printf("MACRO2 adında bir sabit yoktur --> Kod çalıştı ! \n");

#endif


}