#include <stdio.h>
#include <locale.h>

#define		SIZE		100

int main()
{
	setlocale(LC_ALL,"Turkish");
	
	char s1[SIZE],s2[SIZE];
	int i;
	printf("Ýki adet kelime giriniz --> ");
	scanf("%s%s",s1,s2);
	
	int lenght = 0;
	for(i=0; s1[i]!='\0'; i++)
		lenght++;

		
	for(i=0; s1[i]!='\0'; i++)
		s1[lenght++] = s2[i];


	s1[lenght] = '\0';
	
	puts(s1);

}
