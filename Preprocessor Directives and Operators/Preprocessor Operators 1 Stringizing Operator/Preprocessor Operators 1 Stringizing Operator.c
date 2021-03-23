#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define		str(s)			#s
#define		str1(s1,s2)		printf(#s1""#s2);


int main()
{
	printf("%s \n", str(Mikail));
	printf("%s \n", str(3.1415));

	puts(str(Turkiye));

	str1(İstanbul, Ankara);

}