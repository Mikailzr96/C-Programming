#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define			SIZE		100

int main()
{
	// strlen(const char* ) --> Kelime uzunluğunu verir.

	char arr[SIZE];

	printf("Bir kelime giriniz --> ");
	scanf("%s", arr);

	printf("Kelime uzunlugu = %d \n",strlen(arr));
	printf("'Example' uzunlugu = %d \n", strlen("Example"));

	printf("\n\n-----------------------------------------------------------------------------------------------------\n\n");

	// strcpy(char* yapistirilacak_yer,const char* kopyalanacak_kelime) --> Kelime kopyalama işlemini gerçekleştirir.

	char arr1[SIZE] = "Kirmizi";
	char arr2[SIZE] = "Yesil";

	printf("Kopyalama islemi gerceklesmeden once --> \n");
	puts(arr1);
	puts(arr2);

	strcpy(arr1, arr2);
	printf("\nKopyalama islemi gerceklestikten sonra --> \n");
	puts(arr1);		// arr1 = yesil çünkü buraya yapıştırma işlemi gerçekleşti
	puts(arr2);		// arr2 = yesil çünkü ifade const olduğu için ( strcpy(char *,const char *) )  değişmedi.


	printf("\n\n-----------------------------------------------------------------------------------------------------\n\n");

	// strcat(char *s1,const char *s2); --> s2 ifadesini s1'in sonuna ekliyor. s1 + s2
	char arr3[SIZE] = "Elektrik Elektronik ";
	char arr4[SIZE] = "Muhendisi";

	printf("\nEkleme islemi gerceklesmeden once --> \n");
	puts(arr3);
	puts(arr4);

	printf("\nEkleme islemi gerçekleştikten sonra --> \n");
	strcat(arr3, arr4);
	puts(arr3);		// arr1 = 'Elektrik Elektronik Muhendisi' oldu. 
	puts(arr4);		// arr2 = 'Muhendisi' olur çünkü ifade const olduğu için değişmedi.

	printf("\nEkleme islemi gerçekleştikten sonra --> \n");
	strcat(arr3," Mikail");
	puts(arr3);		// arr1 = 'Elektrik Elektronik Muhendisi Mikail' oldu. 

}
