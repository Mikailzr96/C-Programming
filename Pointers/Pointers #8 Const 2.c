#include <stdio.h>
#include <locale.h>

/*
	int *const p = &x;										p is a constat to pointter int 
	int const *p = &x; == 	const int *p = &x;				p is a pointer to constant int	
	
	const neyin �n�ne gelmi�se const o olur. --> *const p durumunda const p'nin �n�ne geldi�inden const = p'dir.Ayn� �ekilde const *p durumunda da const = *p'dir.
		
	int const const *p = &x; == const int const *2 = &x 
*/
int main()
{
	setlocale(LC_ALL, "Turkish");
	
	int a[4] = { 7,14,21,28 };
	
	const int *p = a;				// const = *p'd�r. --> p ve a de�i�ebilir
	
	int*const p1 = a;				// const = p1'dir --> *p1 ve a de�i�ebilir.
	
	
	
}
