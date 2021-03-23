#include <stdio.h>
#include <locale.h>

void puts1(const char* s);
void puts2(const char* s);

int main()
{
	setlocale(LC_ALL, "Turkish");

	puts1("Hello");
	puts2("World");
}

void puts1(const char* s) {

	while (*s != '\0' )
		putchar(*s++);
	putchar('\n');
}
void puts2(const char* s) {

	for (int i = 0; s[i] != '\0'; i++)
		putchar(s[i]);
	putchar('\n');
}