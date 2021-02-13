#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int strcmp1(const char* p1, const char* p2);

int main()
{
	printf("%d", strcmp1("Lenovo", "Asus"));

}

int strcmp1(const char* p1, const char* p2) {
	for (int i = 0; ; i++) {
		if (p1[i] != p2[i])
			return p1[i] > p2[i] ? 1 : -1;
		else
			return 0;
	}
}