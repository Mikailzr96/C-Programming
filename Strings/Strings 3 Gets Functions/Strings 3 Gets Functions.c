#include <stdio.h>
#include <locale.h>

void string_gets_s(char* s, int n);

int main()
{
	setlocale(LC_ALL, "Turkish");

	char s2[10];
	string_gets_s(s2, 10);
}

void string_gets_s(char* s, int n) {
	int c;
	int i = 0;
	while ((c = getchar() != '\n'))
		if (i < n)
			s[i++] = c;
	s[i] = '\0';
}


